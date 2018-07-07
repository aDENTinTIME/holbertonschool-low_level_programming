#include "binary_trees.h"


/**
 * binary_trees_ancestor - Finds the lowest common
 * ancestor of two nodes.
 *
 * @first: First node to compare.
 * @second: Second node to compare.
 * Return: Pointer to common ancestor, or NULL if none found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
										const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (first == second)
		return (NULL); /* should be first, but won't compile */
	if (second->parent == first)
		return (second->parent);
	if (first->parent == second)
		return (first->parent);
	if (first->parent == second->parent)
		return (first->parent);

	binary_trees_ancestor(first->parent, second->parent);

	return (NULL);
}
