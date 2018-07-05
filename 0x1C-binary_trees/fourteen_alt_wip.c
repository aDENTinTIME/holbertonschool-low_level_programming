#include "binary_trees.h"


/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: Pointer to the root node.
 * Return: The the difference between right and left children, 0 if NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	l = 0;
	r = 0;

	if (!tree)
		return (0);

	l = binary_tree_balance(tree->left);
	r = binary_tree_balance(tree->right);

	if (tree->parent)
		return ((l > r ? l : r) + 1);


	/* attempt to use recursion in same function
	   ran into issue with being passed non-root node */
	printf("l=%d r=%d\n", l, r);


	return (l - r);
}
