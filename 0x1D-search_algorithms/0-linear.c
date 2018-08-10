#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 * of integers using the Linear search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: First index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;

	while (array && i < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
