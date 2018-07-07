#include "binary_trees.h"

/**
 * binary_tree_depth - find depth of tree
 *
 * @tree: pointer to the root
 *
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;

if (tree == NULL)
return(0);
while (tree->parent != NULL)
{
depth = depth +1;
tree = tree->parent;
}
return(depth);
}
