/*
* Write a function that prints every other character of a string,
* starting with the first character, followed by a new line.
*/
#include "main.h"

/**
 * puts2 - prints every other character of a string,
 *         starting with the first character
 * @str: string to be printed
 */
void puts2(char *str)
{
	int index = 0;

	do {
		_putchar(str[index]);
	} while (str[++index]);
_putchar('\n');
}
