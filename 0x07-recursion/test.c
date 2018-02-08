#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";

    printf("%c\n", *(s + 1));
    printf("%p\n", s);
    printf("%p\n", (s + 1));
    return (0);
}
