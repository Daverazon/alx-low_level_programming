#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated with a call to malloc
 * @old_size: allocated space for ptr
 * @new_size: size of new memory block
 * Return: return ptr if new_size == old_size
 * return NULL if new_size == 0 and ptr != NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; ptr[i]; i++)
		arr[i] = ptr[i];

	return (arr);
}
