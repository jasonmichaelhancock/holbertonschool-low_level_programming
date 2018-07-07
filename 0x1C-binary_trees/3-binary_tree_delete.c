#include "binary_trees.h"

/**
 * binary_tree_delete - add a node on right
 *
 * @tree: Pointer to the root
 *
 * Return: nothing 
 */
void binary_tree_delete(binary_tree_t *tree)
{
  if (parent == NULL)
    return(NULL);
  binary_tree_delete(tree->left);
  binary_tree_delete(tree->right);
  free(tree);
}
