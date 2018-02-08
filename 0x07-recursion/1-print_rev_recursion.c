#include "holberton.h"

/**
* _print_rev_recursion - Prints a string in reverse.
* Not allowed to use loops.
* @s: Source string.
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
