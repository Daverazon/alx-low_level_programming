/*
* Write a function that encodes a string into 1337.
* Letters a and A should be replaced by 4
* Letters e and E should be replaced by 3
* Letters o and O should be replaced by 0
* Letters t and T should be replaced by 7
* Letters l and L should be replaced by 1
* You can only use one if in your code
* You can only use two loops in your code
* You are not allowed to use switch
* You are not allowed to use any ternary operation
*/
#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char leet[] = "A4E3O0T7L1";
	int index, check;

	for (index = 0; str[index]; index++)
	{
		for (check = 0; leet[check]; check += 2)
		{
			if (str[index] == leet[check] || str[index] == leet[check] + 32)
				str[index] = leet[check + 1];
		}
	}
	return (str);
}
