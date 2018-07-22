#include "binary_trees.h"

/**
 * binary_tree_is_full - determine if binary tree is full
 *
 * @tree: pointer to the root
 *
 * Return: height
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return(0);

	if (tree->left == NULL && tree->right == NULL)
		return(1) ;

	/* If both left and right are not NULL, and left & right subtrees
	   are full */
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return(0);
}
