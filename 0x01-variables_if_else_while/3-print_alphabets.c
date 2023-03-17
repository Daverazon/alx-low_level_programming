#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the alphabets in lower case and uppercase
 *
 * Return: Always returns 0
 */
int main(void)
{
	int i = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";

	while (i < 53)
	{
		putchar(alpha[i]);
		i++;
	}
	return (0);
}
