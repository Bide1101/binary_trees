#include "binary_trees.h"
/**
 * binary_tree_uncle - This function finds the uncle of a node
 * @node: this is a pointer to the node to find the uncle
 * Return: NULL or pointer to thwe uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
	{
		return (0);
	}
	if (node->parent->parent->left &&
		node->parent->parent->right == node->parent)
	{
		return (node->parent->parent->left);
	}
	if (node->parent->parent->right &&
		node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}
	return (0);
}
