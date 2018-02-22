#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - returns the index of the first element
* for which the cmp function does not return 0.
* @array: Array passed to function.
* @size: Size of array.
* @cmp: Function to perform action on array.
* Return: Index of first element found by function.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
