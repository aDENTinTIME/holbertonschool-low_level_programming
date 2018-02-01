#include "holberton.h"
#include <stdio.h>

/**
* print_array - prints all the values in an array.
* @a: array fed in.
* @n: length of array.
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	putchar('\n');
}
