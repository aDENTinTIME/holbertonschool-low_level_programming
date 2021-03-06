#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* op_add - Adds.
* @a: First number passed in.
* @b: Second number passed in.
* Return: Result.
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Subtracts.
* @a: First number passed in.
* @b: Second number passed in.
* Return: Result.
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Multiplies.
* @a: First number passed in.
* @b: Second number passed in.
* Return: Result.
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Divides.
* @a: First number passed in.
* @b: Second number passed in.
* Return: Result.
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - Modulus.
* @a: First number passed in.
* @b: Second number passed in.
* Return: Result
*/

int op_mod(int a, int b)
{
	return (a % b);
}
