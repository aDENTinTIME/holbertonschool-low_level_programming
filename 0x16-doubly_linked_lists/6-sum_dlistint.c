#include "lists.h"

/**
 * sum_dlistint - Adds all the data (n) of a dlistint_t linked list.
 *
 * @head: Head of list.
 * Return: Sum of  all data, or 0 if list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int total;

	total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
