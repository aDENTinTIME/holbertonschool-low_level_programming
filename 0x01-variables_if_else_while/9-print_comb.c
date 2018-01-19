#include <stdio.h>

/**
* main - Prints the alphabet, lower then UPPERCASE.
* Return: 0
*/

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
	putchar(44);
	putchar(32);
	}
	putchar('\n');
	return (0);
}
