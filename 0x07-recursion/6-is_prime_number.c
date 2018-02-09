#include "holberton.h"

/**
* find_prime - Helper function that does the real heavy lifting,
* finds whether input number is prime.
* @n: Number.
* @x: Counter.
* Return: Boolean value.
*/

int find_prime(int n, int x)
{
	if (n <= 1)
		return (0);

	if (x > n / 2)
		return (1);

	if (n % x > 0)
	{
		return (find_prime(n, x + 1));
	}
	else
	{
		return (0);
	}
}

/**
* is_prime_number - Finds and returns prime number.
* Not allowed to use loops.
* @n: Number.
* Return: 1 if prime; 0 if not.
*/

int is_prime_number(int n)
{
	return (find_prime(n, 2));
}
