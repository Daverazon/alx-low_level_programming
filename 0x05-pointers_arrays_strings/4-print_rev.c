#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i = 0, len;

	while (*(s + i))
		i++;
	len = i;

	for (i = 0; *(s + i); i++)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
