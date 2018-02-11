#include "holberton.h"
#include <stdio.h>

/**
* main - Prints the number of arguments passed it.
* @argc: Number of arguments passed into program.
* @argv: Array of arguments passed.
* Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
