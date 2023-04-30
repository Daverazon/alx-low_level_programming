/*
* Write a function that concatenates two strings.
* This function appends the src string to the dest string,
* overwriting the terminating null byte (\0) at the end of dest,
* and then adds a terminating null byte
* Returns a pointer to the resulting string dest
*/
#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src, including the
 * terminating null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int start_cat = 0, index = 0;

	while (dest[index++])
		start_cat++;
	for (index = 0; src[index]; index++, start_cat++)
		dest[start_cat] = src[index];
	dest[start_cat] = '\0';

	return (dest);
}
