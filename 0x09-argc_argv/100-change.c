#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the minimum number of coins to
* make change for an amount of money.
* @argc: Number of arguments passed.
* @argv: Array of arguments passed.
* Return: 1 incorrect number of arguments; 0 if flawless execution is achived.
*/

int main(int argc, char *argv[])
{
	int i, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = 0;
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (;num >= 25; i++)
	{
		num -= 25;
	}
	for (;num >= 10; i++)
	{
		num -= 10;
	}
	for (;num >= 5; i++)
	{
		num -= 5;
	}
	for (;num >= 2; i++)
	{
		num -= 2;
	}
	for (;num >= 1; i++)
	{
		num -= 1;
	}
	printf("%d\n", i);
	return (0);
}
