#include "binary_trees.h"

/**
* binary_tree_height - checks the height of a binary tree
* @tree: the binary tree to check
* Return: height of BT
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	size_t h;
	size_t left = binary_tree_height(tree->left);
	size_t right = binary_tree_height(tree->right);

	if (left > right)
	{
		h = 1 + left;
	}
	else
	{
		h = 1 + right;
	}

	return (h);
}
