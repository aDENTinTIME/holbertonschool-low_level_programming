#include "binary_trees.h"


/**
 * binary_tree_inorder - Goes through
 * a binary tree using in-order traversal.
 *
 * @tree: Pointer to root node of tree.
 * @func: Pointer to function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->left)
		binary_tree_inorder(tree->left, func);
	func(tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
