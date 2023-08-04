#include "binary_trees.h"

/**
 * binary_tree_sibling - This finds the sibling of a node
 * @node: this is a pointer to the node to find the sibling
 * Return: a pointer to the sbling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent == NULL || node == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
