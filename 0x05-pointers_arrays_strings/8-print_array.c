#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: the array
 * @n: the number of integers
 */
void print_array(int *a, int n)
{
	int i = 1;

	if (n > 0)
		printf("%d", *a);

	while (i < n)
	{
		printf(", %d", *(a + i));
		i++;
	}
	putchar('\n');
}
