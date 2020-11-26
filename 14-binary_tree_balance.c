#include "binary_trees.h"

/**
* binary_tree_height - checks the height of a binary tree
* @tree: the binary tree to check
* Return: height of BT
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	return (right + 1);
}

/**
 * binary_tree_balance - returns the balance of a BT
 * @tree: the BT
 * Return: balance of the BT
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right_height, left_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
