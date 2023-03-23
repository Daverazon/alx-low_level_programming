#include "main.h"


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
