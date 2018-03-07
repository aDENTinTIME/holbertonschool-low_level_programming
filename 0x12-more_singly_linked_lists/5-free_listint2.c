#include "lists.h"

/**
* free_listint - Frees a listint_t list, and sets head to NULL.
* @head: Pointer to struct of type listint_t.
*/

void free_listint2(listint_t **head)
{
	listint_t *fir, *sec;

	fir = *head;
	sec = *head;
	*head = NULL;

	while (fir != NULL)
	{
		fir = sec->next;
		free(sec);
		sec = fir;
	}
}
