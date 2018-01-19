#include <stdio.h>

/**
* main - Prints the alphabet, lower then UPPERCASE.
* Return: 0
*/

int main(void)
{
	char n;
	char l;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
	putchar(l);
	}
	putchar('\n');
	return (0);
}
