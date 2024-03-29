#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the array
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_table_t *));
	/*
	 * allocate memory where pointers to the table items (specifically
	 * the head of the linked list) will be stored
	 */

	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
