#include "holberton.h"

/**
* main - Prints the alphabet.
* Return: 0
*/

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
