#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the integer
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1, i = 0;

	while (*(s + i))
	{
		if (*(s + i) == '-')
			sign *= -1;
		if (*(s + i) >= '0' && *(s + i) <= '9')
			num = num * 10 + (*(s + i) - '0');
		i++;
	}
	return (sign * num);
}
