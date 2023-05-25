/*
* Write a function that returns the value of a bit at a given index.
* Prototype: int get_bit(unsigned long int n, unsigned int index);
* where index is the index, starting from 0 of the bit you want to get
* Returns: the value of the bit at index index or -1 if an error occured
*/
#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	return (0);
}
