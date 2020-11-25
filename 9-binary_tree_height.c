#include "binary_trees.h"

/**
* binary_tree_height - checks the height of a binary tree
* @tree: the binary tree to check
* Return: height of BT
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	return (right + 1);
}
