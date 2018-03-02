#include "lists.h"

/**
* 
* @h: Pointer to struct of type list_t.
*
* Return: Number of nodes.
*/

list_t *add_node(list_t **head, const char *str)
{
	const list_t *ptr;
	size_t i;

	if (h == NULL)
		return (0);

	ptr = h;

	for (i = 0; ptr != NULL; i++)
	{
		if (ptr->str != NULL)
			printf("[%u] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");

		ptr = ptr->next;
	}

	return ();
}
