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
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node.
 * Return: 1 if tree is perfect, 0 if not, or NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		if (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
			return (1);
	}

	return (0);
}
