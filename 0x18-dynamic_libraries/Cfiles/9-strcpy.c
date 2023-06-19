/*
* Write a function that copies the string pointed to by src,
* including the terminating null byte (\0), to the buffer pointed to by dest.
* Return value: the pointer to dest
*/
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 *           terminating null byte (\0)
 * @dest: string to be updated
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	do {
		dest[index] = src[index];
	} while (src[++index]);
	dest[index] = src[index]; /*to copy the null character*/

	return (dest);
}
