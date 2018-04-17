#include "holberton.h"

/**
* _strchr - Returns a pointer to the first occurrence of the
* character c in the string s, or NULL if the character is not found.
* @s: Source string.
* @c: Character to look for.
* Return: Modified pointer.
*/

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
	{
	}
	if (s[i] != c)
		return (0);
	else
		return (s + i);
}
