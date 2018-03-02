#include "lists.h"

/**
* _strlen - Measures a string of chars.
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
* add_node_end -
* @
*
* Return:
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int length;
	list_t *ptr;

	if (head == NULL || str == NULL)
		return (NULL);

	length = _const_strlen(str);

	ptr = head;

	*head = malloc(sizeof(list_t *));
	if (head == NULL)
		return (NULL);

	*head->str = malloc(sizeof(char) * length);
	if (head->str == NULL)
		return (NULL);
	head->str = strdup(str);

	head->len = malloc(sizeof(unsigned int));
	if (head->len == NULL)
		return (NULL);
	head->len = length;

	head->next = malloc(sizeof(list_t *));
	if (head->next == NULL)
		return (NULL);
	head->next = &*head;


	return (*head);
}
