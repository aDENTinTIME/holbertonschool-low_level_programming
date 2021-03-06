#include "holberton.h"

/**
* _pow_recursion - Returns the value of x raised to the power of y.
* Not allowed to use loops.
* @x: Number.
* @y: Power.
* Return: Fully powered number.
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y > 1)
	{
		x *= _pow_recursion(x, y - 1);
	}
	return (x);
}
