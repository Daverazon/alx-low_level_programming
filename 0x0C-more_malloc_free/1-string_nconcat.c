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
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	/*i is now the index of the null byte in s1*/

	while (s2[j])
		j++;
	j += 1;
	/*j is now the length of s2*/
	s1 = malloc(i + 1 + j);
	if (s1 == NULL)
		return (NULL);

	for (j = 0; j < n; j++, i++)
		s1[i] = s2[j];
	s1[i] = '\0';

	return (s1);
}
