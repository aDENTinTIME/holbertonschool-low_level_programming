#include "holberton.h"

/**
* _strspn - Returns the number of bytes in the initial
* segment of s which consist only of bytes from accept.
* @s: Source string.
* @c: Character to look for.
* Return: Modified pointer.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, ii;

	for (i = 0; s[i] != '\0';)
	{
		for (ii = 0; accept[ii] != '\0'; ii++)
		{
			if (accept[ii] == s[i])
			{
				i++;
				break;
			}
		}
		if (accept[ii] == '\0')
			return (i);
	}
	return (i);
}
