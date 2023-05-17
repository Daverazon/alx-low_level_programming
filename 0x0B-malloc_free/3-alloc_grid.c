/*
* Write a function that returns a pointer to a 2 dimensional array
* of integers. Each element of the grid should be initialized to 0
* The function should return NULL on failure
* If width or height is 0 or negative, return NULL
*/
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **arr, row, column;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		*(arr + row) = malloc(sizeof(int) * width);

		if (*(arr + row) == NULL)
		{
			for (; row >= 0; row--)
				free(*(arr + row));
			free(arr);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
			*(*(arr + row) + column) = 0;
	}

	return (arr);
}
