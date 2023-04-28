/*
* Write a function that prints a string, followed by a new line, to stdout.
* FYI: The standard library provides a similar function: puts.
* Run man puts to learn more.
*/

#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 */
void _puts(char *str)
{
	int i = 0;

	do {
		_putchar(str[i]);
	} while (str[++i]);
	_putchar('\n');
}
