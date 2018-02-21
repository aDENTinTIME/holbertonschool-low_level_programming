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

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	pup = malloc(sizeof(dog_t));
	if (pup == NULL)
	{
		free(pup);
		return (NULL);
	}

	pup->name = malloc(sizeof(char) * len(name) + 1);
	if (pup->name == NULL)
	{
		free(pup->name);
		return (NULL);
	}

	pup->owner = malloc(sizeof(char) * len(owner) + 1);
	if (pup->owner == NULL)
	{
		free(pup->owner);
		return (NULL);
	}

	n_name = malloc(sizeof(char) * len(name) + 1);
	n_owner = malloc(sizeof(char) * len(owner) + 1);
	cpy(n_name, name);
	cpy(n_owner, owner);
	pup->name = name;
	pup->owner = owner;
	pup->age = age;

	return (pup);
}
