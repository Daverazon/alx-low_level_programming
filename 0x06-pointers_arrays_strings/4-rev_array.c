/*
* Write a function that reverses the content of an array of integers.
* Where n is the number of elements of the array
*/
#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int temp, index = 0;

	for (; index <= n / 2 ; index++)
	{
		temp = *(a + index);
		*(a + index) = *(a + n - index - 1);
		*(a + n - index - 1) = temp;
	}
}
