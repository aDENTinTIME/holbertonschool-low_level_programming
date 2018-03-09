#include "holberton.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: String of chars of 0 and 1s.
*
* Return: Base 10 unsigned int of value of binary.
*/

int main(void)
{
	int i = 0;
	char *b = "hi";

	while (b[i] != '\0')
	{
		printf("%d\n", i);
		i++;
		printf("%d\n", i);
	}

	printf("\n%d::", i);

	while (i--)
	{
		printf("b%d\n", i);
	}

	printf("a%d\n", i);

	return (i);
}
