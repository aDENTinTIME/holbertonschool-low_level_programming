#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 *
 * @ht: The hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *trav, *frem;
	unsigned long int i = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		trav = ht->array[i];
		while (trav)
		{
			frem = trav;
			trav = trav->next;
			free(frem->key);
			free(frem->value);
			free(frem);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
