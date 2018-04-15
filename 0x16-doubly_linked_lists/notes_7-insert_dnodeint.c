#include "lists.h"

/**
 * 
 *
 * @head: Head of list.
 * @index: Position in linked list to travle to.
 * Return: Node at index or NULL if none exists.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *fast, *slow, *new;
	unsigned int i;

	fast = *h;
	slow = *h;
	i = idx - 1;

	if (!h)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
/*
	if (*h == NULL && i == 0)
	{
		*h = new;
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	while (i--)
	{
		if (!step)
			return (NULL);
		step = step->next;
	}
*/
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

	if (!fast)
		return (NULL);

	fast = fast->next;
	while (i--)
	{
		if (!fast)
			return (NULL);
		fast = fast->next;
		slow = slow->next;
	}

	new->n = n;
	new->next = fast;
	new->prev = slow;

	if (new->next != NULL)
		new->next->prev = new;

	slow->next = new;

/*
	new->n = n;
	new->prev = step;
	if (!step)
	{
		new->next = step->next;
	}
		if (!new->next)
			new->next->prev = new;
	step->next = new;
*/
	return (new);
}
