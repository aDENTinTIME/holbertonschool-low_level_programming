#include "holberton.h"

/**
* more_numbers - Prints 0-14, ten times.
*/

void print_square(int size)
{
	int n, i;

	for (i = 0; i < size; i++)
	{
	for (n = 0; n < size; n++)
	{
		_putchar('#');
	}
	n = 0;
	_putchar('\n');
	}
}
