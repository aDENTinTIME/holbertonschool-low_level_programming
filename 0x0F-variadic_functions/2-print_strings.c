#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - Prints strings passed to it.
* @separator: Separator to print between strings.
* @n: Strings passed in.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list kiwi;
	unsigned int i;
	char *ptr;

	va_start(kiwi, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(kiwi, char *);

		if (ptr != NULL)
		{
			printf("%s", ptr);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(kiwi);
}
