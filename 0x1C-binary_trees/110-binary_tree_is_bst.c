#include "binary_trees.h"


/**
 * binary_tree_is_bst - Checks if a binary tree
 * is a valid Binary Search Tree.
 *
 * @tree: Pointer to the root node.
 * Return: 1 if valid BST, 0 if not, or pointer is NULL.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left)
	{
		if (tree->left->n >= tree->n)
			return (0);
		if (tree->parent)
		{
			if (tree->parent->left == tree)
			{
				if (tree->left->n <= tree->parent->n)
					return (1);
			}
			else
			{
				if (tree->left->n <= tree->parent->n)
					return (0);
			}
		}
	}

	if (tree->right)
	{
		if (tree->right->n <= tree->n)
			return (0);
		if (tree->parent)
		{
			if (tree->parent->right == tree)
			{
				if (tree->right->n >= tree->parent->n)
					return (1);
			}
			else
			{
				if (tree->right->n >= tree->parent->n)
					return (0);
			}
		}
	}

	if (!binary_tree_is_bst(tree->left))
		return (0);

	if (!binary_tree_is_bst(tree->right))
		return (0);

	return (1);
}
