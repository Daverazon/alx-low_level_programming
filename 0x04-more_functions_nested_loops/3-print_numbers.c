#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 */
void print_numbers(void)
{
	int nums = '0';

	while (nums <= '9')
	{
		_putchar(nums);
		nums++;
	}
	_putchar('\n');
}
