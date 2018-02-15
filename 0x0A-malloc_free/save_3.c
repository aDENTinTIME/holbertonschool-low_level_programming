#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* 
* @str: Passed in string.
* Return: Pointer to string.
*/

int **alloc_grid(int width, int height)
{
	int *inner;
	int *outer;
	int i, ii;
	int **a;

	outer = malloc(height * sizeof(char *));
	inner = malloc(width * sizeof(char));

	for (i = 0; i < height; i++)
	{
		outer[i] = inner[];
	}




	char *s;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	s = malloc(i * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';

	return (s);
}
