#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of diagonals
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		int space = 1;

		while (space < i)
		{
			_putchar(' ');
			space++;
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
