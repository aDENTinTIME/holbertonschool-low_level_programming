#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position.
*
* @head: Address of pointer to struct of type listint_t.
* @idx: The index of the list where the new node should be added.
* @n: Integer to be given to new node.
*
* Return: Address of the new node, or NULL if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *fir;

	if (head == NULL)
		return (-1);

	fir = *head;

	if (index == 0)
	{
		fir = fir->next;
		return (1);
	}

	while (index)
	{
		if (fir == NULL)
			return (-1);

		fir = fir->next;

		index--;
	}

	fir->next = fir->next->next;
	return (1);
}
