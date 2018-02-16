#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* len - Helper function to measure string length.
* @s: Passed in string.
* Return: Length as number.
*/

int len(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	printf("%d",i);
	return (i);
}

/**
* string_nconcat - Concatenates two strings.
* @s1: Main string.
* @s2: String to draw from.
* @n: Number of chars to take from s2.
* Return: Pointer to concatenated string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, ii;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	ptr = malloc(len(s1) * len(s2) * sizeof(char) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (ii = 0; ii < n && s2[ii] != '\0'; ii++)
	{
		ptr[i] = s2[ii];
		i++;
	}

	ptr[i] = '\0';

	return (ptr);
}
