__author__ = 'nzhang-dev'

from snowflake.nodes import *
from snowflake.vector import Vector

def decompose(stencil, n):
    """
    A stencil can be decomposed IFF it can be decomposed into a sum of independent stencils.
    """
    tree = stencil.op_tree
    components = []
    for i in range(n-1):
        components.append(tree.right)
        tree = tree.left
    components.append(tree)
    return copy.deepcopy(components[::-1])

def repackage(stencil, ndim, group_size):
    parts = decompose(stencil, ndim)
    chunks = [[]]
    count = 0
    for part in parts:
        chunks[-1].append(part)
        count += 1
        if count == group_size:
            count %= group_size
            chunks.append([])
    components = [sum(chunk) for chunk in chunks if chunk]

    # now we have to add the accumulation to every stencil but the first
    for i in range(1, len(components)):
        components[i] = StencilComponent(stencil.output, SparseWeightArray({Vector.zero_vector(ndim) : 1})) + components[i]

    # now that all of the later stencils have this addition, we need to make a group

    stencils = [Stencil(component, stencil.output, stencil.iteration_space, stencil.primary_mesh) for component in components]
    return StencilGroup(stencils)