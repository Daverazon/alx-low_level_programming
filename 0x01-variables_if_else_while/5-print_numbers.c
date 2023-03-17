#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints number 0 to 9
 *
 * Return: Always returns 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');

	return (0);
}
