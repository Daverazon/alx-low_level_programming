/*
* Write a function that reverses a string.
*/
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char temp;

	while (s[index++])
		len++;
	/*len is now the index of the null character*/
	for (index = len - 1; len / 2 <= index; index--)
	{
		temp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = temp;
	} /*used swapping method to reverse*/
}
