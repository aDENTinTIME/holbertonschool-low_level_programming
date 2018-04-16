#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at
 * a point in a dlistint_t linked list.
 *
 * @head: Head of list.
 * @index: Position in linked list to travle to.
 * Return: 1 upon success, -1 upon failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *hold = NULL;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		if (temp->next != NULL)
		{
			temp->next->prev = NULL;
			*head = temp->next;
		}
		else
			*head = temp->next;
		free(temp);
		return (1);
	}
	while (--index)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	if (temp->next == NULL)
		return (-1);
	if (temp->next->next == NULL)
	{
		hold = temp->next;
		temp->next = NULL;
		free(hold);
		return (1);
	}
	hold = temp->next;
	temp->next->next->prev = temp;
	temp->next = temp->next->next;
	free(hold);

	return (1);
}
