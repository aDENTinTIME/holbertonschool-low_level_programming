#include <stdio.h>

/**
* main - Prints the alphabet.
* Return: 0
*/

int main(void)
{
	char l;

	l = 'a';

	while (l <= 'z')
	{
	putchar(l);
	l++;
	if (l == 'e')
	{
	l++;
	}
	else if (l == 'q')
	{
	l++;
	}
	}

	putchar('\n');
	return (0);
}
