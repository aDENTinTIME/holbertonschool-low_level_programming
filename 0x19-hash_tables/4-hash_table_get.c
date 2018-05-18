#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 *
 * @ht: The hash table we want to look in.
 * @key: The key we're are looking for.
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *trav;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	trav = ht->array[index];
	while (trav && strcmp(trav->key, key))
	{
		trav = trav->next;
	}
	if (!trav)
		return (NULL);
	return (trav->value);
}
