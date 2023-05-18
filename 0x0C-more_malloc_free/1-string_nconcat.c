/*
* Write a function that concatenates two strings.
* The returned pointer shall point to a newly allocated space in memory,
* which contains s1, followed by the first n bytes of s2, and null terminated
* If the function fails, it should return NULL
* If n is greater or equal to the length of s2 then use the entire string s2
* if NULL is passed, treat it as an empty string
*/
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer to a newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated
 * returns NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[index++])
		n++;
	/* n is index of first null character for concatenated string*/
	str = malloc(sizeof(char) * (n + 1));
	if (str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		str[index] = s1[index];

	for (; *s2 && index < n; index++)
		str[index] = *s2++;
	str[index] = 0;

	return (str);
}
