/*
* Write a function that locates a character in a string.
* Returns a pointer to the first occurrence of the
* character c in the string s, or NULL if the character is not found
*/
#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to be found
 * Return: a pointer to the first occurrence of the character c in the string
 * s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int len = 0, index;

	while (s[len++])
	;

	for (index = 0; index < len; index++)
	{	if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
