#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes that have at least 1 child
 * @tree: the BT
 * Return: number of nodes with  at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
