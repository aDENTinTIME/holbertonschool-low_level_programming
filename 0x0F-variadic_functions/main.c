#include "variadic_functions.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *ptr = "hola";

    print_all("cieis", 'H', 56, ptr);
	printf("       %ld\t%p\n", (long) ptr, ptr);
    return (0);
}
