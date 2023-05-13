/*
* Write a function that fills memory with a constant byte.
* The _memset() function fills the first n bytes of the
* memory area pointed to by s with the constant byte b
* Returns a pointer to the memory area s
*/
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: constant byte
 * @n: number of bytes
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		*(s + index) = b;

	return (s);
}
