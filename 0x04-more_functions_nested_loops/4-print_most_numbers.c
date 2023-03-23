#include "main.h"


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
