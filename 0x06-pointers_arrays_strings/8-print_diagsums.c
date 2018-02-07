#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two
* diagonals of a square matrix of integers.
* @a: Source array.
* @size: Size of array.
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
