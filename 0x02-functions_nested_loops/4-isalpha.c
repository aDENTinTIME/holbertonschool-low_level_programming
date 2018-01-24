#include "holberton.h"

/**
* _isalpha - Checks if character is a letter.
* @c: is being passed in.
* Return: 1 or 0
*/

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
