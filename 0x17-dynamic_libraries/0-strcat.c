#include "holberton.h"

/**
* _strcat - Appends string src to dest.
* @dest: String to be appended.
* @src: Source string of appendation.
* Return: Appended string.
*/

char *_strcat(char *dest, char *src)
{
	int dest_count, src_count;

	for (dest_count = 0; dest[dest_count] != '\0'; dest_count++)
	{
	}

	for (src_count = 0; src[src_count] != '\0';)
	{
		dest[dest_count] = src[src_count];
		dest_count++;
		src_count++;
	}

	return (dest);
}
