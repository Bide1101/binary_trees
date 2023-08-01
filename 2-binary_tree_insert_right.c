#include "binary_trees.h"
/**
 * binary_tree_insert_right - This inserts a node as the right child
 * of another node
 * @parent: This is a pointer to the node to insert the right child in
 * @value: the value to store in the new node
 * Return: a pointer ro the new node or parent if NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode;

	if (!parent)
	{
		return (NULL);
	}

	rightNode = binary_tree_node(parent, value);
	if (!rightNode)
	{
		return (NULL);
	}

	if (parent->right)
	{
		rightNode->right = parent->right;
		parent->right->parent = rightNode;
	}

	parent->right = rightNode;
	return (rightNode);
}
