#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 *
 * Return: Always returns 0
 */
int main(void)
{
	int n = 48;

	while (n < 57)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar(57);

	return (0);
}
