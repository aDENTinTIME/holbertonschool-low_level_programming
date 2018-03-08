#include "lists.h"

/**
* reverse_listint - Reverses a list of structs.
* @head: Address of pointer to struct of type listint_t.
*
* Return: Address of new first node.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *uno, *dos;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return (NULL);

	uno = *head;
	dos = NULL;

	while (uno->next != NULL)
	{
		if (uno->next->next == NULL)
		{
			uno->next->next = uno;
			uno = uno->next;
			uno->next->next = NULL;
			if (dos == NULL)
				dos = uno;
			uno = *head;
		}
		else
			uno = uno->next;
	}

	*head = dos;

	return (*head);
}
