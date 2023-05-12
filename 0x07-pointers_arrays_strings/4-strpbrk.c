/*
* Write a function that searches a string for any of a set of bytes.
* The _strpbrk() function locates the first occurrence in
* the string s of any of the bytes in the string accept
* Returns a pointer to the byte in s that matches one of
* the bytes in accept, or NULL if no such byte is found
*/
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string whose bytes are to be searched for in s
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		index = 0;
		
		while (accept[index])
		{
			if (*s == accept[index])
				return (s);
			index++;
		}
		s++;
	}
	return ('\0');
}