#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*
*
*
* Return: 0
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = (char *) malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
