#include "holberton.h"

/**
* _strcmp - Appends string src to dest, up to a given number of characters.
* @s1: String to be appended.
* @s2: Source string of appendation.
* Return: Appended string.
*/

int _strcmp(char *s1, char *s2)
{
	int val_1, val_2, index;

	val_1 = 0;
	val_2 = 0;

	for (index = 0; s1[index] != '\0'; index++)
	{
		val_1 += s1[index];
	}
	for (index = 0; s2[index] != '\0'; index++)
	{
		val_2 += s2[index];
	}

	if (val_1 < val_2)
	{
		return (-15);
	} else if (val_1 > val_2)
	{
		return (15);
	}

	return (0);
}
