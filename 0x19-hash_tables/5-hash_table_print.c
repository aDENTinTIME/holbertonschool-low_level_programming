#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * formated like a python dictionary.
 *
 * @ht: The hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *trav;
	unsigned long int i = 0;
	int flag = 0;

	if (!ht)
		return;

	printf("{");
	while (i < ht->size)
	{
		trav = ht->array[i];
		while (trav)
		{
			printf("\'%s\': \'%s\', ", trav->key, trav->value);
			trav = trav->next;
			flag = 1;
		}
		i++;
	}

	if (flag)
		printf("\b\b");
	printf("}\n");
}
