#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 *
 * @ht: The hash table to add or update the key/value to.
 * @key: The key.
 * @value: The value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (!value || !ht || !key || *key == '\0')
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new_node->key = (char *)key;
	new_node->value = (char *)value;

	ht->array[index] = new_node;

/*
I'm doing something wrong probably,
need to make this a LINKED list, just not sure
where to link them, front, back, ordered???
*/
	return (1);
}
