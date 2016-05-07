from __future__ import print_function

__author__ = 'nzhang-dev'
import analyzer
from snowflake.nodes import *
from snowflake.vector import Vector
from ctree.frontend import dump
from snowflake.stencil_compiler import CCompiler
import time
import numpy as np

SIZE = 258
NDIM = 4
DECOMP = 2
ITER = 100

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

t = -time.time()
naive_kernel(*naive_args)
t += time.time()
print("NAIVE:", t/ITER)

def test(tile_size, n):
    opt_args = [test_in] + [test_in]*NDIM + [test_opt_out]
    compiler = CCompiler()
    compiler.tile_size = tile_size
    optimized = analyzer.repackage(sten, NDIM, n)
    kern = compiler.compile(optimized)
    kern(*opt_args)
    t = -time.time()
    kern(*opt_args)
    t += time.time()
    print(tile_size, n, t/ITER)

for i in range(1, NDIM+1):
    tile_size = 16
    while tile_size < SIZE:
        test((tile_size,)*2, i)
        tile_size *= 2