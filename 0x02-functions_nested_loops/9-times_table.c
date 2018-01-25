#include "holberton.h"

/**
* times_table - creates a 9x9 times table.
*/

void times_table(void)
{

int num = 0;
int a = 0;
int i = 0;
int ii = 0;

	while (ii < 10)
	{
		_putchar('0');

		while (i < 9)
		{
			num += a;
			if (num / 10 < 1)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
			i++;
		}

		_putchar('\n');
		a++;
		num = 0;
		ii++;
		i = 0;
	}
}
