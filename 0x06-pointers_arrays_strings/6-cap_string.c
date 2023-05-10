/*
* Write a function that capitalizes all words of a string.
* Separators of words: space, tabulation,
* new line, ,, ;, ., !, ?, ", (, ), {, and }
*/
#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index, iter;
	char separator[] = " \t\n,;.!?\"(){}";

	for (index = 0; str[index]; index++)
	{
		for (iter = 0; separator[iter]; iter++)
		{
			if ((index == 0 || str[index - 1] == separator[iter])
			    && str[index] >= 'a' && str[index] <= 'z')
				str[index] -= 32;
		}
	}
	return (str);
}
