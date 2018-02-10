#include "holberton.h"

/**
* _strncat - Appends string src to dest, up to a given number of characters.
* @dest: String to be appended.
* @src: Source string of appendation.
* @n: Max number of chars from source string to append.
* Return: Appended string.
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_count, src_count;

	for (dest_count = 0; dest[dest_count] != '\0'; dest_count++)
	{
	}

	for (src_count = 0; src[src_count] != '\0' && src_count < n;)
	{
		dest[dest_count] = src[src_count];
		dest_count++;
		src_count++;
	}

	return (dest);
}
