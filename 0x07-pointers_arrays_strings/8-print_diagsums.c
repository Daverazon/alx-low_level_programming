/*
* Write a function that prints the sum of the two diagonals of
* a square matrix of integers.
* You are allowed to use the standard library. Note that in
* the following example we are casting an int[][] into an int*. This
* is not something you should do. The goal here is to make sure you understand
* how an array of array is stored in memory
*/
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 * integers
 * @a: The matrix of integers
 * @size: The size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int row, column, rsum = 0, lsum = 0;

	for (row = 0, column = 0; row < size; row++, column++)
		rsum += *(a + row * size + column);
	for (row = 0, column = size - 1; row < size; row++, column--)
		lsum += *(a + row * size + column);

	printf("%d, %d\n", rsum, lsum);
}
