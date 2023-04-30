/*
* Write a function that concatenates two strings.
* The _strncat function is similar to the _strcat function, except that
* it will use at most n bytes from src; and
* src does not need to be null-terminated if it contains n or more bytes
* Return a pointer to the resulting string dest
*/
#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int start_cat = 0, index = 0;

	while (dest[index])
		start_cat++;
	for (index = 0; index < n; index++, start_cat++)
		dest[start_cat] = src[index];
	dest[start_cat] = '\0';
}
