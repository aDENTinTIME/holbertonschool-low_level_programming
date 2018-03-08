#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp, *current;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (count < (index - 1))
	{
		count++;
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}

	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
