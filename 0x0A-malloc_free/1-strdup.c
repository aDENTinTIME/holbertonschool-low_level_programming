#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - NOT WORKING
* @str: NOT WORKING
* Return: Pointer to string.
*/

char *_strdup(char *str)
{
	char *s;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	s = (char *) malloc(i * sizeof(char));

	s = str;

	if (str == NULL || s == NULL)
		return (NULL);

	return (s);
}
