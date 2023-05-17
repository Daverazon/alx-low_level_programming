/*
* Write a function that concatenates two strings.
* The returned pointer should point to a newly allocated space in memory which
* contains the contents of s1, followed by the contents of s2, and null
* terminated if NULL is passed, treat it as an empty string
* The function should return NULL on failure
*/
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate a string to another string
 * @s1: main string
 * @s2: string to be concatenated to main string
 * Return: return NULL on failure
 * return pointer to s1 which now has s2 concatenated to it
 */
char *str_concat(char *s1, char *s2)
{
	int size = 0, size1 = 0;
	char *str;
	if (!*s1)
		s1 = "";
	if (!*s2)
		s2 = "";

	while (s1[size++])
	;
	while (s2[size1++])
	;

	str = malloc(sizeof(char) * (size + size1 - 1));
	if (str == NULL)
		return (NULL);

	while (*s1++)
		*str++ = *(s1 - 1);
	while (*s2++)
		*str++ = *(s2 - 1);
	*str = '\0';

	return (str -= (size + size1 - 2));
}
