#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 *
 * @size: Desired size of the array.
 * Return: Pointer to new hash table, or NULL in the event of failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	unsigned long int i;

	new_ht = malloc(sizeof(hash_table_t));
	if (!new_ht)
		return (NULL);

	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_ht->array)
		return (NULL);

	i = 0;
	while (i < size)
	{
		new_ht->array[i] = NULL;
		i++;
	}

	return (new_ht);
}
