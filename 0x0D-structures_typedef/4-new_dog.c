#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* cpy - Copies contents of one string to another.
* @dest: Destination string.
* @src: Source string.
* Return: Copied string.
*/

char *cpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

/**
* len - Measures length of string.
* @s: Passed in string.
* Return: Integer with value of length of string.
*/

int len(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}


/**
* new_dog - Creates new variable of type struct dog/dog_t.
* @name: Name of dog.
* @age: Age of dog.
* @owner: Owner of dog.
* Return: pointer to new dog variable.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;
	char *n_name, *n_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	pup = malloc(sizeof(dog_t));
	if (pup == NULL)
	{
		return (NULL);
	}

	n_name = malloc(sizeof(char) * len(name) + 1);
	if (n_name == NULL)
	{
		free(pup);
		return (NULL);
	}

	n_owner = malloc(sizeof(char) * len(owner) + 1);
	if (n_owner == NULL)
	{
		free(n_name);
		free(pup);
		return (NULL);
	}

	cpy(n_name, name);
	cpy(n_owner, owner);
	pup->name = n_name;
	pup->owner = n_owner;
	pup->age = age;

	return (pup);
}
