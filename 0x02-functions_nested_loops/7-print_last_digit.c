#include "holberton.h"

/**
* print_last_digit - Prints the last digit of the number fed in.
* @n: is being passed in.
* Return: -n or n.
*/

int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar ('1');
		_putchar (-(n % 10));
		return (-(n % 10));
	}
	else
	{
		_putchar ('2');
		_putchar ((n % 10));
		return ((n % 10));
	}
}
