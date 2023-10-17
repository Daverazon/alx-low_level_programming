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

	index = key_index((const unsigned char *)key, ht->size);
	/*item if key already exists so just update value*/
	update_value(ht, key, value, index);

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

	/*
	 * insert at index if it's unoccupied
	 * insert at head of list if collision occurs
	 */
	item->next = ht->array[index];
	ht->array[index] = item;
	return (1);
}

/**
 * update_value - updates the value in an element of the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 * @index: hashed value for key
 * Return: 1 if success, 0 if failure
*/
unsigned int update_value(hash_table_t *ht, const char *key, const
char *value, unsigned long int index)
{
	hash_node_t *item = ht->array[index];

	while (item)
	{
		if (strcmp(key, item->key))
		{
			/*
			 * recall that your item value was malloced a location to
			 * make it modifiable, so just realloc it to change the
			 * to suit the new string value to be stored there
			 */
			item->value = realloc(item->value, strlen(value) + 1);
			if (!item->value)
				return (0);
			strcpy(item->value, value);
			return (1);
		}
		item = item->next;
	}
	return (0);
}
