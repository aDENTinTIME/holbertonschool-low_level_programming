#include "holberton.h"

/**
* puts_half - Prints the last half of a string.
* @str: string passed to function.
*/

void puts_half(char *str)
{
	int i, mid;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i--;
	if (i % 2)
	i--;

	mid = i / 2;
	mid++;
	for (; mid <= i; mid++)
	{
		_putchar(str[mid]);
	}
	_putchar('\n');
}
