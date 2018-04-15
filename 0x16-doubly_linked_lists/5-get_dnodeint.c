#include "lists.h"

/**
 * get_dnodeint_at_index - Gets node at index.
 *
 * @head: Head of list.
 * @index: Position in linked list to travle to.
 * Return: Node at index or NULL if none exists.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = head;
	i = index;

	if (!head)
		return (NULL);

	while (i--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
