#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be updated
 * @src: string to be copied
 * Return: pointer to the updated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, new = 0, null;

	while (dest[i++])
		null = i;
	do {
		dest[null] = src[new];
		null++;
	} while (src[new++]);

	return (dest);
}
