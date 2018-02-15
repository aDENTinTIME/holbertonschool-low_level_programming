#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - Concatenates two strings.
* @s1: First passed string.
* @s2: Second passed string.
* Return: Pointer to string.
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, ii, iii;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (; s2[i] != '\0'; i++)
	{
	}

	s = malloc(i * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);

	for (ii = 0; s1[ii] != '\0'; ii++)
	{
		s[ii] = s1[ii];
	}

	for (iii = 0; s2[iii] != '\0'; iii++)
	{
		s[ii] = s2[iii];
		ii++;
	}

	s[ii] = '\0';

	return (s);
}
