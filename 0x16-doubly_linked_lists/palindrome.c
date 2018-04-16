#include <stdio.h>

int main(void)
{
	int i = 999;
	int ii = 999;
	int mul = 0;

	while (ii)
	{
		i = 999;
		while (i)
		{
			mul = i * ii;
			if (mul > 900000 && mul / 100000 == mul % 10 && mul / 10000 % 10 == mul / 10 % 10 && mul / 1000 % 10 == mul / 100 % 10)
				printf("%d * %d = %d\n", i, ii, mul);
			i--;
		}
		ii--;
	}
	return (0);
}
