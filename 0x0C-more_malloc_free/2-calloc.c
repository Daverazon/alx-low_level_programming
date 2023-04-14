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
	void *arr;
	char *filler;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	filler = arr;

	while (i < (size * nmemb))
	{
		filler[i] = '\0';
		i++;
	}

	return (arr);
}
