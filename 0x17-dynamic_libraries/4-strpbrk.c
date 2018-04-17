#include "holberton.h"

/**
* _strpbrk - function locates the first occurrence
* in thestring s of any of the bytes in the string accept.
* @s: Source string.
* @accept: Characters to look for.
* Return: Remaining string from point character occurs.
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, ii;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; accept[ii] != '\0'; ii++)
		{
			if (accept[ii] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
