/*
* Write a function that converts a binary number to an unsigned int.
* Prototype: unsigned int binary_to_uint(const char *b);
* where b is pointing to a string of 0 and 1 chars
* Return: the converted number, or 0 if
* there is one or more chars in the string b that is not 0 or 1
* b is NULL
*/
#include "main.h"
/**
 * exponential - gets the exponential of a 2
 * @x: power to raise 2 to
 * Return: 2 raised to the power of power
*/
unsigned int exponential(unsigned int x)
{
	if (x == 0)
		return (1);
	return (2 * exponential(x - 1));
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int len = 0, power;

	if (!b)
		return (0);
	while (b[len])
		len++;
	for (power = 0, len -= 1; len >= 0; len--, power++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] == '1')
			sum += exponential(power);
	}
	return (sum);
}
