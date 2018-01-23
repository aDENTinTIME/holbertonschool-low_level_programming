#include <stdio.h>

/**
* main - Prints 00-99 with commas and spaces.
* Return: 0
*/

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar((d % 10) + '0');
		while (d <= 9)
		{
			d++;
			putchar((d % 10) + '0');
			while (d <= 9)
			{
				d++;
				putchar((d % 10) + '0');
				if (d <= 999)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
