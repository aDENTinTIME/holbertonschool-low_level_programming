#include "holberton.h"

/**
* clear_bit - Sets the value of a bit to 0 at a given index.
*
* @n: Number to change.
* @index: Position in binary to change.
*
* Return: 1, or -1 if error.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	*n &= *n ^ (1 << index);

	return (1);
}
