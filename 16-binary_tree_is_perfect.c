#include "binary_trees.h"
int tree_height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - This checks if a binary tree is perfect
 * @tree: this is a pointer to the root node of the tree to check
 * Return: 0 if NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right, left, leftHeight, rightHeight;

	right = 0;
	left = 0;
	leftHeight = 0;
	rightHeight = 0;

	if (!tree)
	{
		return (0);
	}
	if ((!tree->left) && (!tree->right))
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		leftHeight = tree_height(tree->left);
		rightHeight = tree_height(tree->right);
	}
	if (rightHeight == leftHeight)
	{
		left = binary_tree_is_perfect(tree->left);
		right = binary_tree_is_perfect(tree->right);
	}
	if (right != 0 && left != 0)
	{
		return (1);
	}
	return (0);
}

/**
 * tree_height - This function measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: NULL or 0
 */
int tree_height(const binary_tree_t *tree)
{
	int rightHeight, leftHeight;

	rightHeight = 0;
	leftHeight = 0;

	if (tree == NULL)
	{
		return (0);
	}
	leftHeight = tree_height(tree->left);
	rightHeight = tree_height(tree->right);
	if (leftHeight > rightHeight)
	{
		return (leftHeight + 1);
	}
	else
	{
		return (rightHeight + 1);
	}
}
