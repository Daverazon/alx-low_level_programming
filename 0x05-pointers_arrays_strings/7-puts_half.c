/*
* Write a function that prints half of a string, followed by a new line.
* The function should print the second half of the string
* If the number of characters is odd, the function should print the last n
* characters of the string, where n = (length_of_the_string - 1) / 2
*/
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len = 0, index = 0;

	while (str[index++])
		len++;
	/*len is index of null character*/
	if (len % 2 == 1)
	{
		for (index = (len - 1) / 2 + 1; str[index]; index++)
			_putchar(str[index]);
	}
	else
	{
		for (index = len / 2; str[index]; index++)
			_putchar(str[index]);
	}
	_putchar('\n');
}
