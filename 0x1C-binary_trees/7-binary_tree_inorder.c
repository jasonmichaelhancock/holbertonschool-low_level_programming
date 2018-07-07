#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse tree in inorder
 *
 * @tree: pointer to the root
 * @func: the function taking node as parameter
 *
 * Return: 1 or 0
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
