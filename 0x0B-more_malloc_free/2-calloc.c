#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - Allocates desired amount of memory and
* initializes it with 0.
* @nmemb: Desired number of elements.
* @size: Size of data type.
* Return: Void pointer to newly allocated memory address.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)ptr + i) = 0;
	}

	return (ptr);
}
