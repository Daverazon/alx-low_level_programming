#include "main.h"

/**
 * _strlen - measures the length of a string
 * @s: string to be measured
 * Return: length of the string
 */
int _strlen(char *s)
{
	int count, i;

	for (count = 0; *(s + i); i++)
		count++;

	return (count);
}
