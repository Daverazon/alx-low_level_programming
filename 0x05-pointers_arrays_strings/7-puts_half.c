#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i = 0, start;

	while (*(str + i))
		i++;
	start = i / 2;

	if (i % 2 == 0)
	{
		while (*(str + start))
		{
			_putchar(*(str + start));
			start++;
		}
	}
	else
	{
		start = (i + 1) / 2;
		while (*(str + start))
		{
			_putchar(*(str + start));
			start++;
		}
	}
	_putchar('\n');
}
