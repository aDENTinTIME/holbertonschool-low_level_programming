#include <stdlib.h>
#include "dog.h"

/**
* init_dog - Initializes d with info.
* @d: dog struct.
* @name: Name of dog.
* @age: Age of dog.
* @owner: Owner of dog.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
