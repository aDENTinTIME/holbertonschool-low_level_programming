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
	dlistint_t *new, *slow, *fast;
	unsigned int i;

	slow = *h;
	fast = *h;
	i = idx;
	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = fast;
		new->prev = NULL;
		*h = new;
		if (!fast)
			fast->prev = new;
		return (new);
	}
	if (fast == NULL)
		return (NULL);
	fast = fast->next;
	while (i--)
	{
		if (fast == NULL)
			return (NULL);
		fast = fast->next;
		slow = slow->next;
	}
	fast = fast->prev;
	slow = slow->prev;
	new->n = n;
	new->next = fast;
	new->prev = slow;
	if (new->next != NULL)
		new->next->prev = new;
	slow->next = new;
	return (new);
}
