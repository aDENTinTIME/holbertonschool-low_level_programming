#include "holberton.h"

/**
* set_bit - Sets the value of a bit to 1 at a given index.
*
* @n: Number to change.
* @index: Position in binary to change.
*
* Return: 1, or -1 if error.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	*n |= 1 << index;

	return (1);
}
