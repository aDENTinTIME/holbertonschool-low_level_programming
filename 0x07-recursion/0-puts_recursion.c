#include "holberton.h"

/**
* _puts_recursion - Prints a string, followed by a new line.
* Not allowed to use loops.
* @s: Source string.
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
