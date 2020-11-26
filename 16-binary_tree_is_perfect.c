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
/**
* binary_tree_size - returns the size of a BT
* @tree: BT to check
* Return: size of BT
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
/**
* binary_tree_is_perfect - checks f a BT is perfect
*@tree: the BT
* Return: 1 if true, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int height, size, p, i;

	p = 1;
	i = 0;

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	while (i <= height)
	{
		p *= 2;
		i++;
	}
	if ((p - 1) == size)
		return (1);
	return (0);
}
