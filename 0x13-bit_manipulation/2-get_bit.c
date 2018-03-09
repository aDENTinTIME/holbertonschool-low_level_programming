#include "holberton.h"

/**
* get_bit - Finds the value of a bit at a given index.
*
* @n: Number to check.
* @index: Position in binary to check.
*
* Return: Value of a bit at a given index.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	i = ((n >> index) & 1);

	return (i);
}
