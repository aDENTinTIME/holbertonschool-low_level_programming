#include "holberton.h"
#include <stdio.h>
/**
* stuff
* Not allowed to use loops.
* @x: Number.
* @y: Power.
* Return: Fully powered number.
*/

int len_check(char *s)
{
	if (*s != '\0')
	{
		return (len_check(s + 1) + 1);
	}

	return (0);
}

int pal_check(int length, int start, char *s)
{
	if (s[length] != s[start])
	{       
		return (0);
	}

	if (start >= length)
	{
		return (1);
	}

	return (pal_check(length--, start++, s));
}

int is_palindrome(char *s)
{
	int length;

	length = len_check(s) - 1;

	printf("%d", length);

	return (pal_check(length, 0, s));
}
