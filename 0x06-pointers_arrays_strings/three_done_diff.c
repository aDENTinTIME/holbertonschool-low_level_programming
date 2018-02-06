#include "holberton.h"

/**
* _strspn - Returns the number of bytes in the initial
* segment of s which consist only of bytes from accept.
* @s: Source string.
* @accept: Characters to look for.
* Return: number of bytes.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, ii;

	i = 0;
	ii = 0;

	for (; accept[ii] != '\0'; ii++)
	{
		if (accept[ii] == s[i])
		{
			i++;
			ii = 0;
		}
	}
	if (accept[ii] == '\0')
		return (i + 1);
	else
		return (0);
}
