#include "binary_trees.h"

/**
 * binary_tree_height - This  measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: NULL or 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rightHeight, leftHeight;

	rightHeight = 0;
	leftHeight = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (0);
	}
	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);
	if (leftHeight > rightHeight)
	{
		return (leftHeight + 1);
	}
	else
	{
		return (rightHeight + 1);
	}
}
