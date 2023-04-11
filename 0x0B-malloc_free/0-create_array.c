#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific
 *char
 * @size: array size
 * @c: char for initializing the array
 * Return: Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;







	return (arr);
}
