#include "binary_trees.h"

/**
* binary_tree_preorder - traverses the tree in preorder and implements func
* @tree: binary tree to traverse
* @func: function to implement
* Return: nothing
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
