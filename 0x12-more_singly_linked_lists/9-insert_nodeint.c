#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position.
*
* @head: Address of pointer to struct of type listint_t.
* @idx: The index of the list where the new node should be added.
* @n: Integer to be given to new node.
*
* Return: Address of the new node, or NULL if it failed.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *fir, *new;

	if (head == NULL)
		return (NULL);

	fir = *head;

	while (idx > 1)
	{
		fir = fir->next;
		idx--;

		if (fir == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = fir;
		fir = new;
		return (new);
	}

	new->next = fir->next;
	fir->next = new;

	return (new);
}
