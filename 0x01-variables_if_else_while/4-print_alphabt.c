#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabets in lower case except e and q
 *
 * Return: Always return 0
 */
int main(void)
{
	int i = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";

	for (; i < 27; i++)
	{
		if (alpha[i] == 'e' || alpha[i] == 'q')
			continue;
		else
			putchar(alpha[i]);
	}
	return (0);
}
