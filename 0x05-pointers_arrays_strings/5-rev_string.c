#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0, j = 0, k = 0;
	char new[100];

	while (*(s + i))
	{
		new[i] = *(s + i);
		i++;
	}

	while (new[j])
		j++;

	while (j >= 0)
	{
		j--;
		*(s + k) = new[j];
	}
}
