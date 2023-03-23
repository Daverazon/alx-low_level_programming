#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int nums = '0';

	while (nums <= '9')
	{
		if (nums != '2' && nums != '4')
			_putchar(nums);
		nums++;
	}
	_putchar('\n');
}
