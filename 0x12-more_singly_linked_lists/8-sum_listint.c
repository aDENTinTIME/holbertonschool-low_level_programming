#include "lists.h"

/**
* sum_listint - Returns the sum of all the
* data (n) of a listint_t linked list.
*
* @head: Pointer to struct of type listint_t.
*
* Return: Sum of all the data (n) of a listint_t linked list.
*/

int sum_listint(listint_t *head)
{
	listint_t *fir;
	int sum;

	fir = head;
	sum = 0;

	while (fir != NULL)
	{
		sum += fir->n;
		fir = fir->next;
	}

	return (sum);
}
