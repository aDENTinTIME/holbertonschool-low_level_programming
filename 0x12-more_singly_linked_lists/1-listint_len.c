#include "lists.h"

/**
* listint_len - returns the number of elements in a linked listint_t list.
* @h: Pointer to struct of type listint_t.
*
* Return: Number of nodes.
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t i;

	if (h == NULL)
		return (0);

	ptr = h;

	for (i = 0; ptr != NULL; i++)
	{
		ptr = ptr->next;
	}

	return (i);
}
