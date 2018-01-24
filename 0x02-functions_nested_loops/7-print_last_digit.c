#include "holberton.h"

/**
* print_last_digit - Prints the last digit of the number fed in.
* @n: is being passed in.
* Return: -n or n.
*/

int print_last_digit(int n)
{
	n = (n % 10);

	if (n < 0)
	{
		n = -(n);
	}

	_putchar (n + '0');
	return (n);
}
