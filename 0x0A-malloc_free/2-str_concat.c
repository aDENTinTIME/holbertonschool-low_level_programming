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
	int i, count;

	count = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		count++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		count++;
	}

	s = malloc(count * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);

	count = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
		count++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s[count] = s2[i];
		count++;
	}

	s[count] = '\0';
	return (s);
}
