#include <stdio.h>

/**
* main - Prints 00-99 with commas and spaces.
* Return: 0
*/

int main(void)
{
	int f, s, t;

	f = '0';
	s = '1';
	t = '2';

	while (f < 10){
	if (f <= 9)
	{
		putchar(f);
		if (s <= 9)
		{
			putchar(s);
			if (t <= 9)
			{
				putchar(t);
			if (f < 7)
			{
				putchar(44);
				putchar(32);
			}
			t++;
			}
		s++;
		t = s;
		}
	f++;
	}
	}

	putchar('\n');
	return (0);
}
