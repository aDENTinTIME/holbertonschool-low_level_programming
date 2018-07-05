#include "binary_trees.h"


/**
 * binary_tree_insert_right - Creates a new
 * right child node on a binary tree.
 *
 * @parent: Parent to be assigned.
 * @value: Value to be assigned to n.
 * Return: Pointer to new node or NULL upon failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_right;

	if (!parent)
		return (NULL);

	new_node_right = malloc(sizeof(binary_tree_t));
	if (!new_node_right)
		return (NULL);

	new_node_right->n = value;
	new_node_right->parent = parent;
	if (parent->right)
	{
		parent->right->parent = new_node_right;
		new_node_right->right = parent->right;
	}
	else
	{
		new_node_right->right = NULL;
	}
	new_node_right->left = NULL;
	parent->right = new_node_right;

	return (new_node_right);
}
