#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* main - Calculator, that can perform addition, subtraction,
* multiplication, division, and modulus.
* Takes input from standard in, and prints to standard out.
*
* @argc: Number of arguments passed in from standard input.
* @argv: Array of strings passed in from standard input.
* Return: 0.
* Exit: Codes for errors caused by missuse of program.
* 98 - Incorrect number of arguments to program.
* 99 - Oporator not found.
* 100 - STOP DIVIDING BY ZERO!
*/

int main(int argc, char *argv[])
{
	int (*calc)(int a, int b);

	int (*get_op_func(char *s))(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	calc = get_op_func(argv[2]);

	if ((calc == op_div || calc == op_mod) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", calc(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
