#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiplies numbers passed it.
* @argc: Number of arguments passed.
* @argv: Array of arguments passed.
* Return: 1 if not two arguments; 0 if flawless execution is achived.
*/

int main(int argc, char *argv[])
{
	int i, a, res;

	res = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		a = atoi(argv[i]);
		res *= a;
	}

	printf("%d\n", res);
	return (0);
}
