#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int c, char *a[])
{
	int num1, num2;

	if (c != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(a[1]);
	num2 = atoi(a[3]);

	printf("%d\n", op_add(num1, num2));
	return (0);
}
