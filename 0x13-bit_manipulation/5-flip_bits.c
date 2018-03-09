#include "holberton.h"

/**
* flip_bits - Flips bits.
*
* @n: First number.
* @m: Second number.
*
* Return: Number.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	n = (n | (n ^ (1 << m))) - n;

	return (n);
}
