#include "lists.h"

/**
* print_listint - Prints all the elements of a listint_t list.
* @h: Pointer to struct of type listint_t.
*
* Return: Number of nodes.
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr;
	size_t i;

	if (head == NULL)
		exit(98);

	ptr = head;

	for (i = 0; ptr != NULL; i++)
	{
		printf("[%p] %d\n", (void*)ptr, ptr->n);
		ptr = ptr->next;

		if (ptr->next == NULL)
			return (i);
	}

	return (i);
}
