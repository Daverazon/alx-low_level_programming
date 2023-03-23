#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int row;

	for (row = 1; row <= size; row++)
	{
		int space = 1, hash = 1;

		while (space <= size - row)
		{
			_putchar(' ');
			space++;
		}
		while (hash <= row)
		{
			_putchar('#');
			hash++;
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
