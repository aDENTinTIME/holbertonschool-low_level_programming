#include "holberton.h"

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
