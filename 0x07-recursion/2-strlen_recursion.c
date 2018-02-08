#include "holberton.h"

/**
* _strlen_recursion - Counts the length of a string.
* Not allowed to use loops.
* @s: Source string.
* Return: Length of string.
*/

int _strlen_recursion(char *s)
{
	int i;

	i = 1;

	if (*s != '\0')
	{
		i += _strlen_recursion(s + 1);
	}
	else if (*s == '\0')
	{
		return (i - 1);
	}
	return (i);
}
