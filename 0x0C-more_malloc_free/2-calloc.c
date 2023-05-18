/*
 * Write a function that allocates memory for an array, using malloc.
 * The _calloc function allocates memory for an array of nmemb elements of size
 * bytes each and returns a pointer to the allocated memory. The memory
 * is set to zero. If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to allocated memory
 * return NULL if any function parameter is 0 or malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *memset;
	unsigned int index = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	memset = ptr;

	while (index < nmemb * size)
		memset[index++] = 0;

	return (ptr);
}
