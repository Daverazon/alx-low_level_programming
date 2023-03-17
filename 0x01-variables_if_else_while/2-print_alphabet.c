#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabets in lower case
 *
 * Return: Always return 0
 */
int main(void)
{
	int i = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";

	while (i < 27)
	{
		putchar(alpha[i]);
		i++;
	}
	return (0);
}
