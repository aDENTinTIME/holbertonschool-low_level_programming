#include <stdio.h>

/**
* main - Prints Fibonacci sequence.
*/

void main(void)
{
	int a, b, c, i;
	
	a = 1;
	b = 2;
	c = 0;

	printf("%d, %d", a, b);

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf(", %d", c);

		a = b + c;
		printf(", %d", a);

		b = c + a;
		printf(", %d", b);
	}
	putchar('\n');
}
