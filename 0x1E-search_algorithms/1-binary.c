#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located
 *         -1 if value absent from array or if array is NULL
 *
 * It assume that @array is already sorted in ascending order
 * It assumes that @value won't appear more than once in @array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t idx0 = 0, idx1, idx;

	if (array == NULL || size == 0)
		return (-1);

	idx1 = size - 1;
	while (1)
	{
		printf("Searching in array: %d", array[idx0]);
		for (size = idx0 + 1; size <= idx1; size++)
		{
			printf(", ");
			printf("%d", array[size]);
		}
		putchar('\n');

		idx = (idx0 + idx1) / 2;
		if (array[idx] == value)
			return (idx);
		if (value < array[idx])
		{
			if (idx == idx0)
				break;
			idx1 = idx -= 1;
		}
		if (value > array[idx])
		{
			if (idx == idx1)
				break;
			idx0 = idx += 1;
		}
	}
	return (-1);
}
