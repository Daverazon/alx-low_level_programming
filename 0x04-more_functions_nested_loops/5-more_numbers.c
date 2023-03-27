#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int nums, lines;

	lines = 1;

	while (lines < 11)
	{
		for (nums = 0; nums < 15; nums++)
		{
			if (nums > 9)
				_putchar(nums / 10 + '0');
			_putchar(nums % 10 + '0');
		}
		_putchar('\n');
		lines++;
	}
}
