#include "holberton.h"

/**
* cap_string - Capitalizes a string.
* @src: Source string.
* Return: Capitalized string.
*/

char *cap_string(char *src)
{
	int i, ii;
	char delim[] = " \t\n,;.!?\"(){}";

	if (src[0] >= 97 && src[0] <= 122)
		src[0] -= 32;

	for (i = 0; src[i] != '\0'; i++)
	{
		for (ii = 0; delim[ii] != '\0'; ii++)
			if (src[i] == delim[ii])
				if (src[i + 1] >= 97 && src[i + 1] <= 122)
					src[i + 1] -= 32;
	}
	return (src);
}
