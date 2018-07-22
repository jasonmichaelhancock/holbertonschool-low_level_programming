#include "binary_trees.h"

/**
 * binary_tree_is_perfect - determine if binary tree is perfect
 *
 * @tree: pointer to the root
 *
 * Return: height
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, leaves, count, total = 1;

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	leaves = binary_tree_leaves(tree);

	for (count = 0; count < height; count++)
		total = 2 * total;
	if (leaves == total)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_leaves - find leaf count of tree
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
