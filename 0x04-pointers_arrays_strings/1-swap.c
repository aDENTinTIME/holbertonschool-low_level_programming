#include "holberton.h"

/**
* swap_int - Changes the values at the memory addresses passed it.
* @a: first memory address passed to function.
* @b: second memory address passed to function.
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
