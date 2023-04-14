#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: an integer
 * @max: an integer
 * Return: pointer to newly created array
 * return NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int i = 0, *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}

	return (arr);
}
