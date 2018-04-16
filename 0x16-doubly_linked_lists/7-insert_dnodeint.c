#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 *
 * @h: Head of list.
 * @idx: Position in linked list to travle to.
 * @n: Number to be stored in node.
 * Return: New node at index or NULL if index out of range.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i;

	temp = *h;
	i = idx;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (i == 0)
	{
		new->next = temp;
		new->prev = NULL;
		if (temp != NULL)
			temp->prev = new;
		*h = new;
		return (new);
	}

	if (temp == NULL)
		return (NULL);
	while (--i)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	new->next = temp->next;
	new->prev = temp;
	new->prev->next = new;
	if (new->next != NULL)
		new->next->prev = new;

	return (new);
}
