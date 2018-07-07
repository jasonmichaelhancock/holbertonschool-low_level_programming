#include "binary_trees.h"

/**
 * binary_tree_height - find height of tree
 *
 * @tree: pointer to the root
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return(-1);
	return((max(binary_tree_height(tree->left), binary_tree_height(tree->right))) +1);
}
/**
 * binary_tree_height - find height of tree
 *
 * @tree: pointer to the root
 *
 * Return: height
 */
size_t max(size_t x, size_t y)
{
	return(((x) > (y)) ? (x) : (y));
}
