#include "holberton.h"

/**
* _strstr - function finds the first occurrence
* of the substring needle in the string haystack.
* @haystack: Source string.
* @needle: String to look for.
* Return: Remaining string from point character occurs.
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, ii;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (ii = 0; needle[ii] == haystack[i + ii]; ii++)
		{
			if (needle[ii + 1] == '\0')
				return (haystack + i);
		}
	}
	return (0);
}
