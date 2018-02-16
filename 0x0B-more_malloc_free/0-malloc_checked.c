#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - Allocates memory using malloc.
* @b: Desired number of bytes.
* Return: Void pointer to newly allocated memory address.
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr != NULL)
	{
		return (ptr);
	}
	else
	{
		exit(98);
	}
}
