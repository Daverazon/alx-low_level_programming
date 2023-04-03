#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area to be copied to
 * @src: memory area ro copy from
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	const char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
