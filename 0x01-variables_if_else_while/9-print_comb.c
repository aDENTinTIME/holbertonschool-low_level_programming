#include <stdio.h>

/**
* main - Prints the alphabet, lower then UPPERCASE.
* Return: 0
*/

int main(void)
{
	char n;
	n = '0';

	while (n <= '9')
	{
	putchar(n);
	if (n < '9')
	{
	putchar(44);
	putchar(32);
	}
	n++;
	}
	
	putchar('\n');
	return (0);
}
