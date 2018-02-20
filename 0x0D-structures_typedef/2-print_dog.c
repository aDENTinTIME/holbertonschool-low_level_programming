#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* print_dog - Prints struct of type dog.
* @d: dog struct.
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->age == 0)
		printf("Name: %s\nAge: %s\nOwner: %s\n", d->name, "(nil)", d->owner);
	else
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
