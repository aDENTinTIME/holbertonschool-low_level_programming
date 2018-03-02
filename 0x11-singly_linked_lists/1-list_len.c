#include "lists.h"

/**
* list_len - returns the number of elements in a linked list_t list
* @h: Pointer to struct of type list_t.
*
* Return: Number of nodes.
*/

size_t list_len(const list_t *h)
{
	const list_t *ptr;
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
