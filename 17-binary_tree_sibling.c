#include "binary_trees.h"

/**
* binary_tree_sibling - returns a pointer to the sibling of a node
* @node: the node tocheck
* Return: pointer to the sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
	{
		if (node->parent->right == NULL)
			return (NULL);
		else
			return (node->parent->right);
	}
	else if (node->parent->right == node)
	{
		if (node->parent->left == NULL)
			return (NULL);
		else
			return (node->parent->left);
	}

	return (NULL);
}
