#include "holberton.h"

/**
* factorial - Returns the factorial of a given number.
* Not allowed to use loops.
* @n: Number to be factored.
* Return: factorial of number.
*/

int factorial(int n)
{
	if (n > 1)
		n *= factorial(n - 1);
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n);
}
