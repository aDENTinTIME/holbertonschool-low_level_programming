#include "holberton.h"

/**
* print_rev - Prints a string, letter by letter, in reverse.
* @s: string passed to function.
*/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
