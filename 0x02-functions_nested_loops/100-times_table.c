#include "main.h"

/**
 * print_times_table - prints n times table starting with 0
 * @n: the number of times table to be printed
 */
void print_times_table(int n)
{
	int a, b;

	for (a = 0; a <= n; a++)
	{
		if (n > 15 || n < 0)
			break;
		for (b = 0; b <= n; b++)
		{
			if (a * b < 10)
			{
				_putchar(a * b + '0');
			}
			else if (a * b > 9 && a * b < 100)
			{	_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
			else
			{
				_putchar((a * b) / 100 + '0');
				_putchar(((a * b) / 10) % 10  + '0');
				_putchar((a * b) % 10 + '0');
			}
			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
