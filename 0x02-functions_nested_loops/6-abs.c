#include "holberton.h"

/**
* _abs - Checks if number is positive, negative, changes to positive.
* @n: is being passed in.
* Return: -n or n.
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (-(n));
	}
	else
	{
		return (n);
	}
}
