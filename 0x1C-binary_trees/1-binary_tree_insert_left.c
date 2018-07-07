#include "binary_trees.h"

/**
 * binary_tree_node - add a node
 *
 * @parent: Pointer to the parent node
 * @value: value of new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  binary_tree_t *new_node;
  new_node = malloc(sizeof(binary_tree_t));
  if (new_node == NULL)
    return(NULL);
  new_node->n = value;

  if (parent->left == NULL)
    {
      parent->left = new_node;
      new_node->left = NULL;
      new_node->right = NULL;
    }
  else
    {
      new_node->left = parent->left;
      new_node->parent = parent;
      new_node->left->parent = new_node;
      parent->left = new_node;
      new_node->right = NULL;
    }
  return(new_node);
}
