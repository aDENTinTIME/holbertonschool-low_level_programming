#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 *
 * @h: Head of list.
 * Return: Number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *step;
	size_t count;

	count = 0;
	step = h;
	while (step)
	{
		printf("%d\n", step->n);
		step = step->next;
		count++;
	}
	return (count);
}
