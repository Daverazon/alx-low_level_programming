/*
* Write a function that locates a substring.
* The _strstr() function finds the first occurrence of the substring needle
* in the string haystack. The terminating null bytes (\0) are not compared
* Returns a pointer to the beginning of the located substring, or
* NULL if the substring is not found.
*/
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located in string
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int n, h = 0;
	char *nfound;

	while (haystack[h])
	{
		n = 0;

		if (haystack[h] == needle[n])
		{
			nfound = &haystack[h];
			for (; needle[n]; h++, n++)
			{
				if (haystack[h] != needle[n])
					break;
			}
			if (!needle[n])
				return (nfound);
		}
		h++;
	}

	return ('\0');
}
