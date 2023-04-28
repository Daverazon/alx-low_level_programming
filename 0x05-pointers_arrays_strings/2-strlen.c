/*
* Write a function that returns the length of a string.
* FYI: The standard library provides a similar function: strlen.
* Run man strlen to learn more.
*/

#include "main.h"

/**
 * _strlen - measures the length of a string
 * @s: string to be measured
 * Return: length of the string excluding the null terminating byte
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[++i])
	;
	/*i is now at the index of the null terminating byte*/

	return (i);
}
