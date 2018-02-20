#ifndef DOG
#define DOG

/**
* struct dog - Holds info about dogs.
* @name: Name of dog.
* @age: Age of dog.
* @owner: Name of owner.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};


int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
