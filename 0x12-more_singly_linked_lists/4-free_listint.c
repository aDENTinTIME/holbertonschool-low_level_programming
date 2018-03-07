#include "lists.h"

/**
* free_listint - Frees a listint_t list.
* @head: Pointer to struct of type listint_t.
*/

void free_listint(listint_t *head)
{
	listint_t *fir, *sec;

	fir = head;
	sec = head;

	while (fir != NULL)
	{
		fir = sec->next;
		free(sec);
		sec = fir;
	}
}
