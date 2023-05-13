/*Write a function that returns the length of a string*/

#include "main.h"

/**
 * _strlen - measures the length of a string
 * @s: string to be measured
 * Return: length of the string excluding the null terminating byte
 */
int _strlen(char *s)
{
	int i = 0, len = 0;

	while (s[i])
	{
		len++;
		i++;
	}
	/*i is now at the index of the null terminating byte*/

	return (i);
}
