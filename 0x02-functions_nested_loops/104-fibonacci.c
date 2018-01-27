#include <stdio.h>

/**
* main - Prints Fibonacci sequence.
* Return: 0
*/

int main(void)
{
	unsigned a, b, c, i;

	a = 1;
	b = 2;
	c = 0;

	printf("%u, %u", a, b);

	for (i = 0; i < 32; i++)
	{
		c = a + b;
		printf(", %u", c);

		a = b + c;
		printf(", %u", a);

		b = c + a;
		printf(", %u", b);
	}
	putchar('\n');

	return (0);
}
