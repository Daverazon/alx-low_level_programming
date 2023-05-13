/*
* Write a function that gets the length of a prefix substring.
* Returns the number of bytes in the initial segment of s
* which consist only of bytes from accept
*/
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the main string
 * @accept: the prefix substring we're checking for
 * Return: number of bytes in initial segment of s comsisting of only bytes
 * from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, sub, prev, count = 0;

	for (index = 0; s[index]; index++)
	{
		prev = count;
		for (sub = 0; accept[sub]; sub++)
		{
			if (s[index] == accept[sub])
				count += 1;
		}
		if (count == prev)
			break;
	}
	return (count);
}
