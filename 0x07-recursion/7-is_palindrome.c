#include "holberton.h"

/**
* len_check - Helper function to check the length of a string.
* @s: String.
* Return: Length of string.
*/

int len_check(char *s)
{
	if (*s != '\0')
	{
		return (len_check(s + 1) + 1);
	}

	return (0);
}

/**
* pal_check - Helper function doing the actual work,
* determins if sting is palindrome.
* @length: Last position in string.
* @start: First position in string.
* @s: String.
* Return: A boolean value.
*/

int pal_check(int length, int start, char *s)
{
	if (s[length] != s[start])
	{
		return (0);
	}

	if (start > length / 2)
	{
		return (1);
	}
	else
	{
		return (pal_check(length - 1, start + 1, s));
	}

	return (0);
}

/**
* is_palindrome - Primary function to be called,
* determins if sting is palindrome.
* Not allowed to use loops.
* @s: String.
* Return: 1 if palindrome; 0 if not.
*/

int is_palindrome(char *s)
{
	int length;

	length = len_check(s) - 1;

	return (pal_check(length, 0, s));
}
