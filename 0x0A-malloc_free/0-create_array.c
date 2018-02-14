#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - A function that creates an array of chars,
* and initializes it with a specific char.
* @size: Desired size of array.
* @c: Char to copy.
* Return: Pointer to string.
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = (char *) malloc(size * sizeof(char));

	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
