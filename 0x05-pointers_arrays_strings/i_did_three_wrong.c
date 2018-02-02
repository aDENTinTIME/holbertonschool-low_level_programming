#include "holberton.h"

/**
* _strcmp - Compares string values.
* @s1: String 1.
* @s2: String 2.
* Return: 15 if s1>s2; -15 if s1<s2; 0 if equal.
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

	if (val_1 > val_2)
	{
		return (15);
	} else if (val_1 < val_2)
	{
		return (-15);
	} else if (val_1 == val_2)
	{
		return (0);
	}

	return (0);
}
