#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 *
 * @head: Head of list.
 * @n: Number to be stored in node.
 * Return: Pointer to new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *slow, *fast;

	slow = *head;
	fast = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	fast = fast->next;
	while (fast)
	{
		fast = fast->next;
		slow = slow->next;
	}

	new->n = n;
	new->next = fast;
	new->prev = slow;

	if (new->next != NULL)
		new->next->prev = new;

	slow->next = new;

	return (new);
}
