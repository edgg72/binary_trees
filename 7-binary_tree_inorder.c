#include "binary_trees.h"

/**
* binary_tree_inorder - traverses the tree in inorder and implements func
* @tree: binary tree to traverse
* @func: function to implement
* Return: nothing
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
