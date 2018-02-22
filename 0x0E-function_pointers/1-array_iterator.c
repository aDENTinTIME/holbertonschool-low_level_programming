#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function given
* as a parameter on each element of an array.
* @array: Array passed to function.
* @size: Size of array.
* @action: Function to perform action on array.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
