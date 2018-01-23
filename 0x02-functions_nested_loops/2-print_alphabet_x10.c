#include "holberton.h"

/**
* print_alphabet_x10 - Prints the alphabet ten times with new lines separating.
* Return: 0
*/

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	letter = 'a';
	i++;
	_putchar('\n');
	}
}
