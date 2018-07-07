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
	size_t rheight;
	size_t lheight;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return(0);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);
	if (lheight > rheight)
		return(lheight + 1);
	else
		return(rheight + 1);
}
