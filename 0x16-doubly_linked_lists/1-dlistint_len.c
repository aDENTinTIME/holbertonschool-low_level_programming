#include "lists.h"

/**
 * dlistint_len - Counts and returns the number of nodes.
 *
 * @h: Head of list.
 * Return: Number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *step;
	size_t count;

	count = 0;
	step = h;
	while (step)
	{
		step = step->next;
		count++;
	}
	return (count);
}
