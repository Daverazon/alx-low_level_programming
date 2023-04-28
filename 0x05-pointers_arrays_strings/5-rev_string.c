/*
* Write a function that reverses a string.
*/
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int rev = 0, new;
	char revstr[new];

	while (s[++rev])
	;/*rev is index of null terminating byte*/
	new = rev + 1;/*revstr is now same size as s*/
	rev -= 1;/*rev is index of character before null terminating byte*/
	for (new = 0; rev >= 0; rev--, new++)
		revstr[new] = s[rev];
	revstr[new] 
	
}
