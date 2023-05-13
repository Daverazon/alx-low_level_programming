/*
* Write a function that copies memory area.
* The _memcpy() function copies n bytes from memory
* area src to memory area dest
* Returns a pointer to dest
*/
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

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
