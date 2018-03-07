#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t linked list.
* @head: Pointer to struct of type listint_t.
*
* Return: Head node’s data (n).
*/

int pop_listint(listint_t **head)
{
	listint_t *fir;
	int hold;

	fir = *head;

	if (fir != NULL)
	{
		hold = fir->n;
		*head = fir->next;
		free(fir);
		return (hold);
	}

	return (0);
}
