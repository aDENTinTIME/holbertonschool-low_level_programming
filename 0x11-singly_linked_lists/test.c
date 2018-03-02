#include "lists.h"
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
	}

	return (i);
}

int main(void)
{
	_putchar(_strlen("hell") + '0');

	return (0);
}
