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
	dlistint_t *p;

	p = *h;

	if (!h)
		return (NULL);

	while (--idx && p)
	{
		p = p->next;
	}
	p->next = add_dnodeint(&p->next, n);
	p->next->prev = p;

	return (p->next);
}
