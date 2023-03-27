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
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);

	return (dest);
}
