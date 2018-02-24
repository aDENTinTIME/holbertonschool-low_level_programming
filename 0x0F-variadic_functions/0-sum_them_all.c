#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - Adds all numbers passed to it.
* @n: Variable number of arguments.
* Return: Sum.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list kiwi;
	unsigned int i;
	int sum;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(kiwi, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(kiwi, int);
	}

	va_end(kiwi);

	return (sum);
}
