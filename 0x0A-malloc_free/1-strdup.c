#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: Passed in string.
* Return: Pointer to string.
*/

char *_strdup(char *str)
{
	char *s;
	int i, ii;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	s = malloc(i * sizeof(char) + 1);

	for (ii = 0; ii < i + 1; ii++)
	{
		s[ii] = str[ii];
	}

	return (s);
}
