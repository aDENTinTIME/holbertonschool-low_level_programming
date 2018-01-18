#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints "with proper grammar, but the outcome is a piece of art,"
* Return: 0
*/

int main(void)
{
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}
	return (0);
}
