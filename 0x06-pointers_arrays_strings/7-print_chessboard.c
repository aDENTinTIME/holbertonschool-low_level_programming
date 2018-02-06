#include "holberton.h"

/**
* print_chessboard - Prints the 2D array provided.
* @a: Source 2D array.
*/

void print_chessboard(char (*a)[8])
{
	int i, ii;

	for (i = 0; i < 8; i++)
	{
		for (ii = 0; ii < 8; ii++)
		{
			_putchar(a[i][ii]);
		}
	_putchar('\n');
	}
}
