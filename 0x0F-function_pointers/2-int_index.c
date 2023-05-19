#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to be searched
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index to the first element for which cmp does not return 0
 * return -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (!(array && cmp))
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
