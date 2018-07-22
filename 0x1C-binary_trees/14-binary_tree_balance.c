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

if (tree == NULL)
return(0);
lheight = binary_tree_height(tree->left);
rheight = binary_tree_height(tree->right);
if (lheight > rheight)
return(lheight + 1);
else
return(rheight + 1);
}

/**
 * binary_tree_balance - function that measure the balance factor of a binary tree
 *
 * @tree: pointer to the root
 *
 * Return: balance factor, or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
size_t left = 0;
size_t right = 0;

if (tree == NULL)
return (0);
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
return ((int)left - (int)right);
}
