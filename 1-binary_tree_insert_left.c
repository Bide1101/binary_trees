#include "binary_trees.h"
/**
 * binary_tree_insert_left - This function inserts a node as the left-child
 * of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode;

	if (parent == NULL)
	{
		return (NULL);
	}

	leftNode = malloc(sizeof(binary_tree_t));
	if (leftNode == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = leftNode;
		leftNode->parent = parent;
		leftNode->n = value;
		leftNode->right = NULL;
		leftNode->left =  NULL;
	}
	else
	{
		leftNode->parent = parent;
		leftNode->left = parent->left;
		leftNode->right = NULL;
		leftNode->n = value;
		parent->left->parent = leftNode;
		parent->left = leftNode;
	}
	return (leftNode);
}
