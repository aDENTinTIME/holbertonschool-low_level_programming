#include "holberton.h"

/**
* string_toupper - Makes every letter uppercase.
* @src: Source string.
* Return: Uppercase string.
*/

char *string_toupper(char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		if (src[index] >= 97 && src[index] <= 122)
			src[index] -= 32;
	}

	return (src);
}
