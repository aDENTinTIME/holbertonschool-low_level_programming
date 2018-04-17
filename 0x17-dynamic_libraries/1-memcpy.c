#include "holberton.h"

/**
* _memcpy - Copies n bytes from memory area src to memory area dest.
* @src: Source array.
* @dest: Destination array.
* @n: Number of bytes to replace.
* Return: Modified array.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
