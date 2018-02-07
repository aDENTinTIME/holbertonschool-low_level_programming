#include "holberton.h"
#include <stdio.h>

/**
* _strstr - function finds the first occurrence
* of the substring needle in the string haystack.
* @haystack: Source string.
* @needle: String to look for.
* Return: Remaining string from point character occurs.
*/

void print_diagsums(int *a, int size)
{
	int value1, value2, i, up, down;

	up = size + 1;
	down = size - 1;
	i = 0;
	value1 = *(a + 0);
	value2 = *(a + size * size);

	while (i < size)
	{
		value1 += *a;
		a += up;
		i++;
	}

	i = size;
	a += 

	while (i > 0)
	{
		value2 -= *a;
		a -= down;
		i--;
	}

	printf("%d, %d\n", value1, value2);
}
