#include "holberton.h"

/**
* _puts - Prints a string, letter by letter.
* @str: string passed to function.
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
