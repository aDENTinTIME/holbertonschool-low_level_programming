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
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	else
		return ((n >> index) & 1);
}
