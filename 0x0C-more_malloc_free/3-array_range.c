/*
 * Write a function that creates an array of integers.
 * The array created should contain all the values from min (included) to
 * max (included), ordered from min to max
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
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
	int index = 0, size = max - min + 1;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	while (index < size)
		arr[index++] = min++;

	return (arr);
}
