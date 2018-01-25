#include "holberton.h"

/**
* print_diagonal - Prints a forward slash, 'n' times.
* @n: number of times desired.
*/

void print_diagonal(int n)
{
	int i = 0;
	int count = 0;

	if (n <= 0)
		_putchar('\n');

	while (n > 0)
	{
		for (i = count; i > 0; i--)
		{
		_putchar(' ');
		}
		_putchar('\\');
		n--;
		_putchar('\n');
		count++;
	}
}
