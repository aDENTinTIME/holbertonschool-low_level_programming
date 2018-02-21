#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - Puts passed in name string into passed in function.
* @name: String passed to function.
* @f: Function that prints text including a string passed to it.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
