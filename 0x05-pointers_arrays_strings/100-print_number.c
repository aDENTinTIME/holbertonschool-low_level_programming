#include "holberton.h"

/**
* print_number - Prints the number given.
* @n: number.
*/
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar ('-');
	}

	if (n > 99999)
		_putchar (n % 1000000 / 100000 + '0');
 
	if (n > 9999)
		_putchar (n % 100000 / 10000 + '0');

	if (n > 999)
		_putchar (n % 10000 / 1000 + '0');

	if (n > 99)
		_putchar (n % 1000 / 100 + '0');

	if (n > 9)
		_putchar (n % 100 / 10 + '0');

	_putchar (n % 10 + '0');
}
