#include <stdio.h>
#include <string.h>

/**
* print_square - Prints a "square" of '#' using input for size.
* @size: disered size of square.
*/

void main(int argc, char *argv[])
{
	int n, i;
//	char inp[strlen(argv[1])];
//	strcpy(inp, argv[1]);
	int val = atoi(argv[1]);

	if (val <= 0)
		putchar('\n');

	for (i = 0; i < val; i++)
	{
	for (n = 0; n < val; n++)
	{
		putchar('#');
	}
	n = 0;
	putchar('\n');
	}
}
