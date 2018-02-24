#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - Prints numbers passed to it.
* @separator: Separator to print between numbers.
* @n: Numbers.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list kiwi;
	unsigned int i;

	if (n == 0)
		return;

	va_start(kiwi, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(kiwi, int));

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(kiwi);
}
