#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _isdigit - Returns weather character is a digit or not.
* @c: charater fed in.
* Return: 1 or 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
* char_check - Checks every char of input string to see if it's an int.
* @s: Passed in string.
* Return: 1 if char is found; 0 if only ints.
*/

int char_check(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_isdigit(s[i]) == 0)
			return (1);
	}

	return (0);
}

/**
* main - Adds numbers passed it.
* @argc: Number of arguments passed.
* @argv: Array of arguments passed.
* Return: 1 if int found; 0 if flawless execution is achived.
*/

int main(int argc, char *argv[])
{
	int i, a, res;

	res = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (char_check(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		a = atoi(argv[i]);
		res += a;
	}

	printf("%d\n", res);
	return (0);
}
