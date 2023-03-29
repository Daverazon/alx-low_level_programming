#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be updated
 * @src: string to be copied
 * @n: number of bytes of src to be copied
 * Return: pointer to the updated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, new = 0, null;

	while (dest[i++])
		null = i;
	while (new + 1 <= n)
	{
		dest[null] = src[new];
		null++;
		new++;
	}

	return (dest);
}
