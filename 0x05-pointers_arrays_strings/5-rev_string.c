#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0, len, len2;
	char new[100000];

	while (*(s + i))
		i++;
	len = i - 1;
	len2 = len;

	for (i = 0; len >= 0; i++)
	{
		new[i] = *(s + len);
		len--;
	}

	for (i = 0; i <= len2; i++)
	{
		*(s + i) = new[i];
	}
}
