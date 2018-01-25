#include "holberton.h"

/**
* more_numbers - Prints 0-14, ten times.
*/

void more_numbers(void)
{
	int n, i;

	for (i = 0; i < 10; i++)
	{
	for (n = 0; n <= 14; n++)
	{
		if (n > 9)
			_putchar(n / 10 + '0');

		_putchar(n % 10 + '0');
	}
	n = 0;
	_putchar('\n');
	}
}
