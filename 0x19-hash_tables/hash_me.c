#include <stdio.h>

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

/**
 * main - hash_me will use the djb2 algorithim to hash any input,
 * and return the modulus 1024. How close can you get? I got 1007,
 * gc what I did there?
 *
 * @argc: Number of arguments to program.
 * @argv: Array of arguments.
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Give me something to hash out!\nUsage: hash_me [string]\n");
		return (1);
	}

	printf("%lu\n", key_index((const unsigned char *)argv[1], 1024));
	return (0);
}
