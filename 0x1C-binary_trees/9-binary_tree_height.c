#include "binary_trees.h"


/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node.
 * Return: The hieght of a tree, 0 if root has no children, or is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int l, r;

	l = 0;
	r = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (((l = binary_tree_height(tree->left)) >
			(r = binary_tree_height(tree->right)) ? l : r) + 1);
}
