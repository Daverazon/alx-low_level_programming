#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 on success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned long int index;

	if (!key || strcmp(key, "") == 0 || !value || !ht)
		return (0);

	/*allocate space for the item*/
	item = malloc(sizeof(hash_node_t));
	if (!item)
		return (0);

	/*allocate space for the objects to store a modifiable local copy*/
	item->key = malloc(strlen(key) + 1);
	if (!item->key)
	{
		free(item);
		return (0);
	}
	strcpy(item->key, key);

	item->value = malloc(strlen(value) + 1);
	if (!item->value)
	{
		free(item->key);
		free(item);
		return (0);
	}
	strcpy(item->value, value);

	index = key_index((const unsigned char *)key, ht->size);
	/*
	 * insert at index if it's unoccupied
	 * insert at head of list if collision occurs
	 */
	item->next = ht->array[index];
	ht->array[index] = item;
	return (1);
}
