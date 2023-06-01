/*
* Write a function that returns the number of bits you would need to flip to
* get from one number to another.
* Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
* You are not allowed to use the % or / operators
*/
#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits = 64;
	unsigned int count = 0, ntest, mtest;

	while (bits)
	{
		ntest = n >> bits;
		mtest = m >> bits;

		if ((ntest & 1) ^ (mtest & 1))
			count++;
		bits--;
	}
	return (count);
}
