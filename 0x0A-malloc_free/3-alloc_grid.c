#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - NOT WORKING
* @str: NOT WORKING
* Return: Pointer to string.
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, ii;

	if (width == 0 || height == 0)
		return (NULL);

	grid = malloc(width * height * sizeof(int *));
	*grid = malloc(width * sizeof(int));

	for (i = 0; i < height; i++)
	{
		for (ii = 0; ii < width; ii++)
		{
			grid[i][ii] = 0;
		}
	}

	if (i == height && ii == width)
	{
		return (grid);
	}
	else
	{
		return (NULL);
	}
}
