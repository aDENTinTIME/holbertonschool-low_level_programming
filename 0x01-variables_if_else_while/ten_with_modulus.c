#include <stdio.h>

/**
* main - Prints 00-99 with commas and spaces.
* Return: 0
*/

int main(void)
{
	int d = 0;

	while (d < 100)
	{
		putchar((d / 10) + '0');
		putchar((d % 10) + '0');
		putchar((d % 100) + '0');
		if (d < 99)
		{
			putchar(44);
			putchar(32);
		}
		d++;
	}

	putchar('\n');
	return (0);
}
