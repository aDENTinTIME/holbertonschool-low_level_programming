#include "holberton.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: String of chars of 0 and 1s.
*
* Return: Base 10 unsigned int of value of binary.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int mul, i, sum;

	if (b == NULL)
		return (0);

	mul = 1;
	i = 0;
	sum = 0;

	while (b[i] != '\0')
	{
		i++;
	}

	while (i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] & 1)
			sum += mul;

		mul *= 2;
	}

	return (sum);
}
