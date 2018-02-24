#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(char c)
{
	printf("%c", c);
}

void print_int(int i)
{
	printf("%d", i);
}

void print_float(float f)
{
	printf("%f", f);
}

void print_string(char *s)
{
	printf("%s", s);
}


/**
* sum_them_all - 
* @n: 
* Return: 
*/

void print_all(const char * const format, ...)
{
	va_list kiwi;
	int i, ii;
	char *pass_f;

	format_t hold_f[] = {
		{c, "char", print_char},
		{i, "int", print_int},
		{f, "float", print_float},
		{s, "char *", print_string}
	};

	i = 0;

	va_start(kiwi, format);

	while (42)
	{
		ii = 0;
		pass_f = va_arg(kiwi, *char);
		while (ii < 4)
		{
			if (pass_f[i] == hold_f[ii].sym)
				hold_f[ii].func(va_arg(kiwi, hold_f[ii].type));
			ii++;
		}
		i++;

		if (pass_f[i] == '\0')
			break;
	}

	va_end(kiwi);

	return;

	printf("\n");
}
/*
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
*/
