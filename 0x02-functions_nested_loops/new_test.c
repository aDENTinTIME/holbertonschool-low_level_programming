#include <stdio.h>

int main (void)
{
	int a, b, c, d, i;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	i = 0;

	while(i < 4)
	{
		putchar(a);
		putchar(b);
		putchar(':');
		putchar(c);
		putchar(d);
		putchar('\n');
		i++;
	}
	return(0);
}
