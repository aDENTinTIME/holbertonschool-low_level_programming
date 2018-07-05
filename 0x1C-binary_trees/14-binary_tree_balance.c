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

	if (!tree)
		return (0);

	return (((l = binary_tree_height(tree->left)) >
			(r = binary_tree_height(tree->right)) ? l : r) + 1);
}


/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: Pointer to the root node.
 * Return: The the difference between right and left children, 0 if NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
