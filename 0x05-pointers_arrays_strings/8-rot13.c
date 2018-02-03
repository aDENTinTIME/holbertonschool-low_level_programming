#include "holberton.h"

/**
* rot13 - Converts string to rot13.
* @src: Source string.
* Return: rot13 string.
*/

char *rot13(char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if      (src[i] >= 110 && src[i] <= 122)
			src[i] -= 13;
		else if (src[i] >= 97 && src[i] <= 109)
			src[i] += 13;
		else if (src[i] >= 78 && src[i] <= 90)
			src[i] -= 13;
		else if (src[i] >= 65 && src[i] <= 77)
			src[i] += 13;
	}
	return (src);
}
