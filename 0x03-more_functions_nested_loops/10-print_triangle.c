#include "holberton.h"

/**
* print_triangle - Prints a forward slash, 'n' times.
* @size: desired size of triangle.
*/

void print_triangle(int size)
{
	int i;
	int count = 1;

	if (size <= 0)
		_putchar('\n');

	while (size > 0)
	{
	for (i = 1; i < size; i++)
		_putchar(' ');
	for (i = 0; i < count; i++)
		_putchar('#');

	_putchar('\n');
	size--;
	count++;
	}
}
