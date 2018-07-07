#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse tree in pre-order
 *
 * @tree: pointer to the root
 * @func: the function taking node as parameter
 *
 * Return: 1 or 0
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
  if (tree == NULL || func == NULL)
	  return;
  func(tree->n);
  binary_tree_preorder(tree->left, func);
  binary_tree_preorder(tree->right, func);
}
