/*Write a function that changes all lowercase letters of a string to uppercase.*/
#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (*(str + index))
	{
		if ('a' <= *(str + index) && *(str + index) <= 'z')
			*(str + index) = *(str + index) - 32;
		index++;
	}
	return (str);
}
