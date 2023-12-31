#include "binary_trees.h"

/**
* binary_tree_size - This measures the size of a binary tree
* @tree: points to the root node of the tree to measure the size
* Return: size of the tree or return 0 if tree is NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	else
		return (0);
}
