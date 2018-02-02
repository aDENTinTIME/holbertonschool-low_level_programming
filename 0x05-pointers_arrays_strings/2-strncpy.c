#include "holberton.h"

/**
* _strncpy - Copies strings.
* @dest: String to be overwritten.
* @src: Source string.
* @n: Max number of chars from source string to copy.
* Return: Copied string.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; src[count] != '\0' && count < n; count++)
	{
		dest[count] = src[count];
	}

	return (dest);
}