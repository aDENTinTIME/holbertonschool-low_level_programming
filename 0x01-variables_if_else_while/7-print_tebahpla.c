#include <stdio.h>

/**
* main - Prints the alphabet.
* Return: 0
*/

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
	putchar(l);
	}
	putchar('\n');
	return (0);
}
