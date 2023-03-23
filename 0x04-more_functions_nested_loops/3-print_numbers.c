#include "main.h"


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
