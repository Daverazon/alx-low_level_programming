/*
* Write a function that prints a string, in reverse, followed by a new line.
*/
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int rev = 0;

	while (s[rev])
		rev++;
	rev -= 1;
	for (; s[rev]; rev--)
		_putchar(s[rev]);
	_putchar('\n');
}
