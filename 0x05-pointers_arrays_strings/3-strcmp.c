#include "holberton.h"

/**
* _strcmp - Compares string values.
* @s1: String 1.
* @s2: String 2.
* Return: 15 if s1>s2; -15 if s1<s2; 0 if equal.
*/

int _strcmp(char *s1, char *s2)
{
	int index;

	for (index = 0; s1[index] != '\0' || s2[index] != '\0'; index++)
	{
		if (s1[index] > s2[index])
		{
			return (15);
		} else if (s1[index] < s2[index])
		{
			return (-15);
		} else if (s1[index] == s2[index])
		{
			return (0);
		}
	}

	return (0);
}
