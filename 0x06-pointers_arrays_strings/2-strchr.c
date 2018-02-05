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

	if (s[0] == '\0')
		return('\0');
	for (i = 0; s[i] != c && s[i] != '\0'; i++)
	{
	}
	return (s + i);
}
