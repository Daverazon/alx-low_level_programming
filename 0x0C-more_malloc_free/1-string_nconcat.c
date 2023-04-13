#include "main.h"
#include <stdlib.h>

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
	unsigned int i = 0, j = 0, new1 = 0;
	char *new = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	/*i is now the index of the null byte in s1*/
	new = malloc(i + n + 2);
	if (new == NULL)
		return (NULL);

	while (new1 < i)
	{
		new[new1] = s1[new1];
		new1++;
	}
	while (j < n)
	{
		new[new1] = s2[j];
		new1++;
		j++;
	}
	new[new1] = '\0';
	
	return (new);
}
