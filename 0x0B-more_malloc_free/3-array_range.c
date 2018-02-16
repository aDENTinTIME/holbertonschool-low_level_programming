#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range -
* @min:
* @max:
* Return:
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max;)
	{
		ptr [i] = min;
		i++;
		min++;
	}

	return (ptr);
}
