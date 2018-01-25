#include "holberton.h"

/**
* _isupper - Returns weather character is uppercase or not.
* @c: charater fed in.
* Return: 1 or 0
*/

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
