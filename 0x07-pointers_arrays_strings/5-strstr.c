/*
* Write a function that locates a substring.
* The _strstr() function finds the first occurrence of the substring needle
* in the string haystack. The terminating null bytes (\0) are not compared
* Returns a pointer to the beginning of the located substring, or
* NULL if the substring is not found.
*/
#include "main.h"
#include <stdio.h>

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

	if (!*needle)
		return (haystack);

	while (*haystack++)
	{
		if (*(haystack - 1) == *needle)
		{	nfound = --haystack;

			for (n = 0; *haystack++ == needle[n++];)
			{
				if (!needle[n])
					return (nfound);
			}
			--haystack;/*on half-match, return haystack
			* to differing character for check with start of needle
			*/
		}

	}
	return ('\0');/*the strstr doesn't return --haystack to return
	* null if substring isn't found, instead it gives a segfault. So I'll
	* return a char instead of char * to cause a segfault
	*/
}
