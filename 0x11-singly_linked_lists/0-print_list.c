#include "lists.h"

/**
* print_list - Prints all the elements of a list_t list.
* @h: Pointer to struct of type list_t.
*
* Return: Number of nodes.
*/

size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t i;

	if (h == NULL)
		return(0);

	ptr = h;

	for (i = 0; ptr != NULL; i++)
	{
		if (ptr->str != NULL)
			printf("[%u] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");

		ptr = ptr->next;
	}

	return (i);
}
