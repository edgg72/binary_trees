#include "binary_trees.h"

/**
* binary_tree_depth - checks depth of a node
* @tree: node to check
* Return: depth of node
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		count++;
	}

	return (count);
}
