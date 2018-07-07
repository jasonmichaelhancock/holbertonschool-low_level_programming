#include "binary_trees.h"

/**
 * binary_tree_depth - find height of tree
 *
 * @tree: pointer to the root
 *
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth;

if (tree == NULL || tree->parent == NULL)
return(0);
depth = binary_tree_depth(tree->parent);
return(depth + 1);
}
