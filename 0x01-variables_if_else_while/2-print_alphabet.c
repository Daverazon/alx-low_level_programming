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
	int n;
	int i = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	while (i < 27)
	{
		putchar(alpha[i]);
		i++;
	}
	return (0);
}
