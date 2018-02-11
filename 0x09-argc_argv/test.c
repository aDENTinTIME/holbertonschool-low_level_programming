#include <stdio.h>
#include <stdlib.h>

/**
* main - This program says it's name.
* @argc: Number of strings passed into program.
* @argv: Array of strings passed.
* Return: 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	char a;

	a = atoi(argv[1]);

	printf("%c\n", a);
	return (0);
}
