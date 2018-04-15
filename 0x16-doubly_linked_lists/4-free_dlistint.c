#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 *
 * @head: Head of list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;

	if (!head)
		return;

	while (1)
	{
		temp = head->next;
		free(head);
		if (!temp)
			return;
		head = temp->next;
		free(temp);
		if (!head)
			return;
	}
}
