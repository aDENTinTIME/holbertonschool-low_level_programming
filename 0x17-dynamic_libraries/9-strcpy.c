#include "holberton.h"

/**
* _strcpy - copies contents of one string to another.
* @dest: destination string.
* @src: source string.
* Return: copied string.
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
