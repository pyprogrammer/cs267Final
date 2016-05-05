from __future__ import print_function

__author__ = 'nzhang-dev'
import analyzer
from snowflake.nodes import *
from snowflake.vector import Vector
from ctree.frontend import dump
from snowflake.stencil_compiler import CCompiler
import time
import numpy as np

SIZE = 160
NDIM = 4
DECOMP = 2
ITER = 100
ROUNDS = 10

def create_component(ndim, dim):
    # each component is one dimension -> A[i] = B[i](A[i] - A[i-1]) + B[i+1](A[i+1] - A[i])
    lower_diff = StencilComponent("mesh",
                                  SparseWeightArray({Vector.zero_vector(ndim): 1, -Vector.unit_vector(dim, ndim): -1}))
    lower_diff *= StencilComponent("beta_{}".format(dim),
                                 SparseWeightArray({Vector.zero_vector(ndim): 1}))
    upper_diff = StencilComponent("mesh",
                                  SparseWeightArray({Vector.zero_vector(ndim): -1, Vector.unit_vector(dim, ndim): 1}))
    upper_diff *= StencilComponent("beta_{}".format(dim),
                                 SparseWeightArray({Vector.unit_vector(dim, ndim): 1}))

    return lower_diff + upper_diff


def create_stencil(ndim):
    components = [create_component(ndim, dim) for dim in range(ndim)] ## creates components for beta_1 to beta_n
    total = sum(components)
    return Stencil(total, "out", [(1, -1, 1)]*ndim, "mesh")

sten = create_stencil(NDIM)

optimized = analyzer.repackage(sten, NDIM, DECOMP)

naive_compiler = CCompiler()

optimized_compiler = CCompiler()

naive_kernel = naive_compiler.compile(StencilGroup([sten]*ITER))
optimized_kernel = optimized_compiler.compile(StencilGroup(optimized.body*ITER))

test_in = np.arange((SIZE + 2)**NDIM, dtype=np.float).reshape((SIZE+2,)*NDIM)

test_out = np.zeros_like(test_in)
test_opt_out = np.zeros_like(test_in)

naive_args = [test_in] + [test_in]*NDIM + [test_out]
naive_kernel(*naive_args)
opt_args = [test_in] + [test_in]*NDIM + [test_opt_out]
optimized_kernel(*opt_args)


t_naive = -time.time()
for i in range(ROUNDS):
    naive_kernel(*naive_args)
t_naive += time.time()
t_opt = -time.time()
for i in range(ROUNDS):
    optimized_kernel(*opt_args)
t_opt += time.time()

print("NAIVE:", t_naive / (ITER * ROUNDS))
print("OPT:", t_opt / (ITER * ROUNDS))