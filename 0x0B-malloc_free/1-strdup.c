/*
* Write a function that returns a pointer to a newly allocated space in
* memory, which contains a copy of the string given as a parameter.
* The _strdup() function returns a pointer to a new string which is a duplicate
* of the string str. Memory for the new string is obtained with malloc, and can
* be freed with free.
* Returns NULL if str = NULL
* On success, the _strdup function returns a pointer to the duplicated string.
* It returns NULL if insufficient memory was available
*/
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string
 * Return: Returns NULL if str = NULL
 * returns NULL if insufficient memory was available
 * returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size++])
	;

	dup = malloc(sizeof(char) * size);
	if (dup == NULL)
		return (NULL);

	while (*str++)
		*dup++ = *(str - 1);

	*dup = '\0';
	return (dup -= size - 1);
}
