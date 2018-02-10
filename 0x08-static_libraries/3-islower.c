#include "holberton.h"

/**
* _islower - Checks if character is lowercase.
* @c: is being passed in.
* Return: 1 or 0
*/

int _islower(int c)
{
	if (c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
