#include "binary_trees.h"

/**
 * binary_trees_ancestor - this function finds the lowest
 * common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second noode
 * Return: a pointer to the lowest common ancestor node of two given nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	binary_tree_t *left;
	binary_tree_t *right;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}
	left = first->parent;
	right = second->parent;
	if (first == right || left == NULL || (!left->parent && right))
	{
		return (binary_trees_ancestor(first, right));
	}
	else if (right == NULL || left == second || (!right->parent && left))
	{
		return (binary_trees_ancestor(left, second));
	}
	return (binary_trees_ancestor(left, right));
}
