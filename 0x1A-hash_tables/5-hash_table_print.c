#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *item;
	unsigned long int index, first = 0;

	if (!ht)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		item = ht->array[index];
		if (item)
			first += 1;
		/*
		 * use counter to start printing commas and spaces only
		 * before any head key/value pair other than the first one
		 */
		if (first > 1 && item)
			printf(", ");

		while (item)
		{
			printf("'%s': '%s'", item->key, item->value);
			if (item->next)
				printf(", ");
			item = item->next;
		}
	}
	printf("}\n");
}
