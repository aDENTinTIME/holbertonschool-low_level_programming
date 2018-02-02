#include "holberton.h"

/**
* reverse_array - Reverses the content of an array of integers.
* @a: Source string.
* @n: Length of string.
*/

void reverse_array(int *a, int n)
{
	int i, d, med;

	i = 0;
	d = n - 1;
	med = 0;

	while (i < d)
	{
		med = a[i];
		a[i] = a[d];
		a[d] = med;

		i++;
		d--;
	}
}
