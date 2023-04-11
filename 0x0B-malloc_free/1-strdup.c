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
	int i = 0, len;
	char *newstr;

	while (*(str + i))
		i++;
	len = i + 1;

	newstr = (char *)malloc(sizeof(char) * len);

	if (newstr == NULL || str == NULL)
		return (NULL);

	for (i = 0; i < len - 1; i++)
		newstr[i] = str[i];
	newstr[i] = '\0';

	return (newstr);
}
