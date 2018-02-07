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
	int val1, val2, i;

	val1 = 0;
	val2 = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		val1 += a[i];
	}

	for (i = size - 1; i < size * size - 1; i += size - 1)
	{
		val2 += a[i];
	}

	printf("%d, %d\n", val1, val2);
}
