#include <stdio.h>

/**
 * main - prints a string
 *
 * Return: Always return zero
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0 ; i < 57 ; i++)
	{
		putchar(quote[i]);
	}
	return (1);
}
