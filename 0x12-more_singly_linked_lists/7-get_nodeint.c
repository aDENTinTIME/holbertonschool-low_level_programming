#include "lists.h"

/**
* get_nodeint_at_index - Returns the
* nth nodeof a listint_t linked list.
*
* @head: Pointer to struct of type listint_t.
* @index: Position of node desired.
*
* Return: Address of node, or NULL if nonexistent.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *fir;

	fir = head;

	while (index > 0)
	{
		if (fir == NULL)
			return (NULL);

		fir = fir->next;

		index--;
	}

	return (fir);
}
