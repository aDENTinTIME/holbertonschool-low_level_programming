#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* 
* @
* @
* @
* Return:
*/

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*get_op_func(char *s))(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
/*
	if (argv[2] != ARRAY_ELEMENT)
	{
		printf("Error\n");
		exit(99);
	}
*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	get_op_func(argv[2])(num1, num2);

	return (0);
}
