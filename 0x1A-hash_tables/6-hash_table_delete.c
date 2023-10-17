#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *item, *next_item;
	unsigned long int index;

	if (!ht)
		return;
	for (index = 0; index < ht->size; index++)
	{
		item = ht->array[index];
		while (item)
		{
			next_item = item->next;
			free(item->key);
			free(item->value);
			free(item);
			item = next_item;
		}
	}
	free(ht->array);
	free(ht);
}
