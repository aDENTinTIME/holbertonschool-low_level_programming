#include "holberton.h"

/**
* jack_bauer - 24 hours.
*/

void jack_bauer(void)
{
	int a, b, c, d, i;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	i = 0;

	while (i < 1440)
	{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(':');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar('\n');

		if (d < 9)
		{
			d++;
		}
		else
		{
			c++;
			d = 0;
		}

		if (c > 5)
		{
			b++;
			c = 0;
		}

		if (b > 9)
		{
			a++;
			b = 0;
		}
	i++;
	}
}
