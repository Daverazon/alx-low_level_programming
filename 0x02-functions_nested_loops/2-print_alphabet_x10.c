#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lower case 10 times
 */

void print_alphabet_x10(void)
{
	int letter = 97, times = 1;

	while (times <= 10)
	{
		while (letter <= 122)
		{
			_putchar(letter);
			letter++;
		}
		_putchar(10);
		times++;
	}
}
