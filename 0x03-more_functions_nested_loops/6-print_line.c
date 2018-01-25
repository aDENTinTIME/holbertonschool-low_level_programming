#include "holberton.h"

/**
* print_line - Prints an underscore, 'n' times.
* @n: number of segments of line desired.
*/

void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
