#include "main.h"

/**
 * print_alphabet - prints the alphabets in lower case
 */
void print_alphabet(void)
{
	int letter = 97;

	while (letter <= 122)
	{
		_putchar(letter);
	}
	_putchar(10);
}
