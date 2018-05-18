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
	hash_node_t *new_node, *ptr;

	if (!value || !ht || !key || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	ptr = ht->array[index];
	while (ptr)
	{
		if (!strcmp(ptr->key, key))
		{
			free(ptr->value);
			ptr->value = strdup(value);
			return (1);
		}
		ptr = ptr->next;
	}
	ptr = ht->array[index];

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	if (!(new_node->key))
		return (0);

	new_node->value = strdup(value);
	if (!(new_node->value))
		return (0);

	new_node->next = NULL;
	if (ptr)
		new_node->next = ptr;

	ht->array[index] = new_node;

	return (1);
}
