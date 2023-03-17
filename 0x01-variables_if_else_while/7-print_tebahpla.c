#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabets in reverse lower case
 *
 * Return: Always return 0
 */
int main(void)
{
	int i = 25;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	while (i >= 0)
	{
		putchar(alpha[i]);
		i--;
	}
	putchar('\n');
	return (0);
}
