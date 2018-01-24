#include "holberton.h"

/**
* print_sign - Checks if number is positive, negative, or zero.
* @n: is being passed in.
* Return: 1, 0, or -1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
