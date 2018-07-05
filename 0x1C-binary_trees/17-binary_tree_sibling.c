#include "binary_trees.h"


/**
 * binary_tree_sibling - Finds the sibling of a node.
 *
 * @node: Pointer to the node that can't find it's sibling, I got you lil' bud.
 * Return: Pointer to sibling, NULL if node or parent is NULL, or no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);

	return (NULL);
}
