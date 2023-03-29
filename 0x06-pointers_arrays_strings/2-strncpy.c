#include "main.h"

/**
 * _strncat - copies a string
 * @dest: string to be updated
 * @src: string to be copied
 * @n: number of bytes of src to be copied
 * Return: pointer to the updated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
