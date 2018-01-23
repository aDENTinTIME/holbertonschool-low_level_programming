#include <stdio.h>

/**
* main - Prints 00-99 with commas and spaces.
* Return: 0
*/

int main(void)
{
	int d = 1;

	while (d < 90)
	{
		if ((d % 10) < (d / 10))
		{
			d = d + 1 + 1 * (d / 10);
		}
		putchar((d / 10) + '0');
		putchar((d % 10) + '0');
		putchar((d % 100) + '1');
		if (d < 89)
		{
			putchar(44);
			putchar(32);
		}
		d++;
	}

	putchar('\n');
	return (0);
}
