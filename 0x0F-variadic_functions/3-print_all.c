#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
* sum_them_all - 
* @n: 
* Return: 
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i, ii;
	const char *pass_f;

	format_t hold_f[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};


	va_start(ap, format);

	pass_f = format;

	i = 0;
	while (pass_f[i] != '\0')
	{
		ii = 0;
		while (ii < 4)
		{
			if (pass_f[i] == hold_f[ii].sym)
			{
				hold_f[ii].f(va_arg(ap, int));
			}
			ii++;
		}
		i++;
	}

	va_end(ap);

	printf("\n");

	return;
}

void print_char(va_list c)
{
	printf("%d", va_arg(c, int));
}

void print_string(va_list i)
{
	printf("%d", va_arg(i, int));
}

void print_int(va_list f)
{
	printf("%f", va_arg(f, double));
}

void print_float(va_list s)
{
	printf("%s", va_arg(s, char *));
}
