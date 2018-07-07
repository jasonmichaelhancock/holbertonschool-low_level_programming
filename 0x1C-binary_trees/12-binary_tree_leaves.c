#include "binary_trees.h"

/**
 * binary_tree_leave - find leaf count of tree
 *
 * @tree: pointer to the root
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return(0);
	if (tree->left == NULL && tree->right == NULL)
		return(1);
	else
		return(binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
