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

	while (i + 1 <= n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
