#include "binary_trees.h"

/**
 * binary_tree_uncle - find the sibling node if exists
 *
 * @node: pointer to the node
 *
 * Return: pointer to sibling
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
	{
		return (node->parent->parent->right);
	}
	return (node->parent->parent->left);
}
