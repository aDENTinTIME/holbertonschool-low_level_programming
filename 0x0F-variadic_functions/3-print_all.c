#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
* print_all - Function that will print anything given to it.
* @format: Variables passed in.
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i, ii;
	char *sep;

	format_t hold_f[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	sep = "";

	va_start(ap, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		ii = 0;
		while (hold_f[ii].sym != NULL)
		{
			if (format[i] == *hold_f[ii].sym)
			{
				printf("%s", sep);
				hold_f[ii].f(ap);
				sep = ", ";
			}
			ii++;
		}
		i++;
	}

	printf("\n");

	va_end(ap);
}

/**
* print_char - Prints char.
* @c: Passed in char.
*/

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
* print_int - Prints int.
* @i: Passed in string.
*/

void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
* print_float - Prints float
* @f: Passed in float.
*/

void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
* print_string - Prints string.
* @s: Passed in string.
*/

void print_string(va_list s)
{
	char *ptr = va_arg(s, char *);

	if (ptr == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", ptr);
}
