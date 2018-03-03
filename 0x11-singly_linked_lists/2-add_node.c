#include "lists.h"

/**
* _const_strlen - Measures a string of chars.
* @string: Pointer to string.
*
* Return: Number of chars.
*/

int _const_strlen(const char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
	}

	return (i);
}


/**
* add_node - Adds a new node at the beginning of a list_t list.
* @head: Address of struct.
* @str: Literal string passed in.
*
* Return: Address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	int length;
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);

	length = _const_strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new->str);
		return (NULL);
	}

	new->len = length;

	new->next = *head;

	*head = new;

	return (*head);
}
