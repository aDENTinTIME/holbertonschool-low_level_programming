#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* 
* @a: First number passed in.
* @b: Second number passed in.
* Return: 
*/

int op_add(int a, int b)
{
	int total;

	total = a + b;
	printf("%d\n", total);
	return (total);
}

/**
* 
* @a: First number passed in.
* @b: Second number passed in.
* Return: 
*/

int op_sub(int a, int b)
{
	int total;

	total = a - b;
	printf("%d\n", total);
	return (total);
}

/**
* 
* @a: First number passed in.
* @b: Second number passed in.
* Return: 
*/

int op_mul(int a, int b)
{
	int total;

	total = a * b;
	printf("%d\n", total);
	return (total);
}

/**
* 
* @a: First number passed in.
* @b: Second number passed in.
* Return: 
*/

int op_div(int a, int b)
{
	int total;

	total = a / b;
	printf("%d\n", total);
	return (total);
}

/**
* 
* @a: First number passed in.
* @b: Second number passed in.
* Return: 
*/

int op_mod(int a, int b)
{
	int total;

	total = a % b;
	printf("%d\n", total);
	return (total);
}
