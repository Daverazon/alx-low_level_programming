#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: character to be printed
 *
 * Return: return 1 if true and 0 if false.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
