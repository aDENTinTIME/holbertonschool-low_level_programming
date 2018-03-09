#include "holberton.h"

/**
* binary_helper - Converts and prints base 10 in base 2.
* @num: Argument of type int.
*
* Return: Number of characters printed.
*/

unsigned int binary_helper(unsigned int num)
{
	if (num < 2)
	{
		_putchar(num + '0');
		return (1);
	}
	return (1 + binary_helper(num >> 1) + !_putchar((num & 1) + '0'));
}


/**
* print_binary - Prints the binary representation of a number.
* @n: Int to be printed.
*/

void print_binary(unsigned long int n)
{
	binary_helper(n);
}
