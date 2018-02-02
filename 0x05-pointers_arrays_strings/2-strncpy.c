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

	for (count = 0; count < n; count++)
	{
		if (src[count] != '\0')
		{
			dest[count] = src[count];
		} else
		{
			for (; count < n; count++)
			{
				dest[count] = '\0';
			}
		}
	}
	return (dest);
}
