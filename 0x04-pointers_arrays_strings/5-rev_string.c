#include "holberton.h"

/**
* rev_string - Reverses a string, letter by letter.
* @s: string passed to function.
*/

void rev_string(char *s)
{
	int i, d, med;

	i = 0;
	d = 0;
	med = 0;

	for (; s[d] != '\0'; ++d)
	{
	}
	d -= 1;
	while (i <= d)
	{
		med = s[i];
		s[i] = s[d];
		s[d] = med;

		d--;
		i++;
	}
}
