#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node
* at index index of a listint_t linked list.
*
* @head: Address of pointer to struct of type listint_t.
* @index: The index of the node that should be deleted.
*
* Return: 1 if it succeeded, -1 if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *fir, *current;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	fir = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(fir);
		return (1);
	}

	while (count < (index - 1))
	{
		fir = fir->next;
		if (fir == NULL)
			return (-1);
		count++;
	}

	current = fir->next;
	fir->next = current->next;
	free(current);
	return (1);
}
