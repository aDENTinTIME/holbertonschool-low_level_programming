#include "holberton.h"

/**
* find_root - Helper function to find square root.
* @n: Number.
* @mul: Root.
* Return: Square root.
*/

int find_root(int n, int mul)
{
	if (n < 1 || mul > n / 2)
	{
		return (-1);
	}

	if (mul * mul == n)
	{
		return (mul);
	}
	else
	{
		return (find_root(n, mul + 1));
	}
}

/**
* _sqrt_recursion - Finds and returns square root of number.
* Not allowed to use loops.
* @n: Number.
* Return: Square root.
*/

int _sqrt_recursion(int n)
{
	return (find_root(n, 1));
}
