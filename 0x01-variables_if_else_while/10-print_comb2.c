#include <stdio.h>

/**
* main - Prints the alphabet, lower then UPPERCASE.
* Return: 0
*/

int main(void)
{
	int n, nn;

	n = '0';
	nn = '0';

	while (n <= '9')
	{
	putchar(n);
	putchar(nn);
	if (n <= '9')
	{
	putchar(44);
	putchar(32);
	}
	nn++;
	if (nn > '9')
	{
	nn = '0';
	n++;
	}
	}

	putchar('\n');
	return (0);
}
