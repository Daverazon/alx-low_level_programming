#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *            using the interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: first index where value is located
 *         -1 if @value is not present in @array or if @array is NULL
 *
 * It assumes that @array will be sorted in ascending order
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));

	if (array == NULL || size == 0)
		return (-1);

	while (pos <= high)
	{
		low = pos;

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
