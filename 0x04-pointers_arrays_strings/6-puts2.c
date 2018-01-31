#include "holberton.h"

/**
* puts2 - Prints every other character in string passed in.
* @str: string passed to function.
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0';)
	{
		_putchar(str[i]);
		i++;
		if (str[i] == '\0')
		break;

		i++;
	}
	_putchar('\n');
}
