#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	int row;

	for (row = 1; row <= size; row++)
	{
		int n;

		for (n = 1; n <= size; n++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
