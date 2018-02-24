#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
* struct format - Struct format_t.
* @sym: symbol.
* @f: function.
*/

typedef struct format
{
	char *sym;
	void (*f)(va_list);
} format_t;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(va_list c);
void print_int(va_list i);
void print_float(va_list f);
void print_string(va_list s);

#endif
