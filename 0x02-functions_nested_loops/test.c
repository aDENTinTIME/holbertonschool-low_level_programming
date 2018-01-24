#include <stdio.h>

int main (void)
{
	int a, b, c, d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';

	while(b % 10 < 4)
	{
		putchar(a);
		putchar(b);
		putchar(':');
		putchar(c);
		putchar(d);
		putchar('\n');

		if (d <= 9)
		{
			d++;
		}
		else if (c == 5 && d == 9)
		{
			b++;
			c = 0;
			d = 0;
		}
		else
		{
			c++;
		}

		a = b % 100 / 10;

	}
	return(0);
}
