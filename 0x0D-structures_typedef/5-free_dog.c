#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* print_dog - Prints struct of type dog.
* @d: dog struct.
*/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
