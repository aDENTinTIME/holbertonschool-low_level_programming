#include "holberton.h"

/**
* i_have_the_power - Raises a number 'num' to a power 'pow'.
*
* @num: Number to multiply.
* @pow: Power to raise to.
*
* Return: Number raised to given power.
*/

unsigned long int i_have_the_power(unsigned long int num, unsigned long int pow)
{
	unsigned long int hold = num;

	while (pow--)
	{
		num *= hold;
	}

	return (num);
}


/**
* print_binary - Prints the binary representation of a number.
* @n: Int to be printed.
*/

void print_binary(unsigned long int n)
{
	unsigned long int mul, i, sum;

	sum = 0;

	while (n > 1)
	{
		i = 0;
		mul = 1;

		while (n >= mul)
		{
			i++;
			mul *= 2;
		}

		n -= (mul / 2);
		sum += i_have_the_power(10, (i - 2));
	}

	sum += n;
//print bit shifty thing of the sum
	printf("%lu", sum); //remove printf
}
