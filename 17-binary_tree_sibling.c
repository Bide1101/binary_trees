#include "binary_trees.h"
/**
 * binary_tree_sibling - This function fimds the sibling of a node
 * @node: this is a pointer to the node to find the sibling
 * Return: a pointer to the sbling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node->parent || !node)
	{
		return (0);
	}
	if (node->parent->left && node->parent->right == node)
	{
		return (node->parent->left);
	}
	if (node->parent->right && node->parent->left == node)
	{
		return (node->parent->right);
	}
	return (0);
}
