#include "holberton.h"

/**
* print_number - prints number given.
* @n: number.
*/
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar ('-');
	}
	if (n > 999)
		_putchar (n % 10000 / 1000 + '0');

	if (n > 99)
		_putchar (n % 1000 / 100 + '0');

	if (n > 9)
		_putchar (n % 100 / 10 + '0');

	_putchar (n % 10 + '0');
}
