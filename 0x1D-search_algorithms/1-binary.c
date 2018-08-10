#include "search_algos.h"

/**
 * print_array - Prints an array.
 *
 * @array: Pointer to the first element of the array to print.
 * @size: Number of elements in array.
 */
void print_array(int *array, size_t size)
{
	size_t i;

	i = 0;

	if (!array)
		return;
	printf("Searching in array: ");
	while (i < size)
	{
		if (i + 1 == size)
			printf("%d", array[i]);
		else
			printf("%d, ", array[i]);
		i++;
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: First index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	int i;

	i = 1;

	while (array && size)
	{
		print_array(array, size);
		if (value < array[size / 2])
			size /= 2;
		else if (value > array[size / 2])
		{
			size /= 2;
			array += size;
		}
		else
			return (i);
		i++;
	}
	return (-1);
}
