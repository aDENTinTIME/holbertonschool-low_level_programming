#include <stdio.h>

/**
* main - Incomplete.
* Return: 0
*/

int main(void)
{
	int n, nn, nnn;

	n = '0';
	nn = '1';
	nnn = '2';

	while (n <= '8')
	{
	putchar(n);
	putchar(nn);
	if (n < '8' ||  nn < '9')
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
