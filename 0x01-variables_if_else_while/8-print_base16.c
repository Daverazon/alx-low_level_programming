#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all base 16 numbers
 *
 * Return: Always returns 0
 */
int main(void)
{
	int n = 48;
	int m = 97;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (m < 103)
	{
		putchar(m);
		m++;
	}
	putchar('\n');

	return (0);
}
