#include "lists.h"

/**
* print_listint - Prints all the elements of a listint_t list.
* @h: Pointer to struct of type listint_t.
*
* Return: Number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t i;

	if (h == NULL)
		return (0);

	ptr = h;

	for (i = 0; ptr != NULL; i++)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (i);
}
