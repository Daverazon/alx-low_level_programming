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
	int n;
	char *nfound;

	while (*haystack)
	{
		n = 0;
		if (*haystack == needle[n])
		{
			nfound = haystack;
			for (; needle[n]; haystack++, n++)
			{
				if (*haystack != needle[n])
					{
						haystack = nfound;
						break;
					}
			}
			if (!needle[n])
				return (nfound);
		}
		haystack++;

	}

	return ("\0");
	/*
	* or you can just return (haystack) since at this point
	* the pointer will be on the null character
	*/
}
