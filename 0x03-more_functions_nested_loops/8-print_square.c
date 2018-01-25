#include "holberton.h"

/**
* print_square - Prints a "square" of '#' using input for size.
* @size: disered size of square.
*/

void print_square(int size)
{
	int n, i;

	if (size <= 0)
		_putchar('\n');

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
