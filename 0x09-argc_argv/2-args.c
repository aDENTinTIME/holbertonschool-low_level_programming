#include "holberton.h"
#include <stdio.h>

/**
* main - This program says it's name.
* @argc: Number of strings passed into program.
* @argv: Array of strings passed.
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
