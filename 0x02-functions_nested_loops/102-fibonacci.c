#include <stdio.h>

/**
* main - Prints Fibonacci sequence.
* Return: 0
*/

int main(void)
{
	unsigned long a, b, c, i;

	a = 1;
	b = 2;
	c = 0;

	printf("%lu, %lu", a, b);

	for (i = 0; i < 16; i++)
	{
		c = a + b;
		printf(", %lu", c);

		a = b + c;
		printf(", %lu", a);

		b = c + a;
		printf(", %lu", b);
	}
	putchar('\n');

	return (0);
}
