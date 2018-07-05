#include "binary_trees.h"


/**
 * binary_tree_insert_left - Creates a new
 * left child node on a binary tree.
 *
 * @parent: Parent to be assigned.
 * @value: Value to be assigned to n.
 * Return: Pointer to new node or NULL upon failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_left;

	if (!parent)
		return (NULL);

	new_node_left = malloc(sizeof(binary_tree_t));
	if (!new_node_left)
		return (NULL);

	new_node_left->n = value;
	new_node_left->parent = parent;
	if (parent->left)
	{
		parent->left->parent = new_node_left;
		new_node_left->left = parent->left;
	}
	else
	{
		new_node_left->left = NULL;
	}
	new_node_left->right = NULL;
	parent->left = new_node_left;

	return (new_node_left);
}
