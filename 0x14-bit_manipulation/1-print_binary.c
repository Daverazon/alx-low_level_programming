/*
* Write a function that prints the binary representation of a number.
* Prototype: void print_binary(unsigned long int n);
* Format: see example
* You are not allowed to use arrays
* You are not allowed to use malloc
* You are not allowed to use the % or / operators
*/
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int bit_shift = 63;/*assume type is 32 bit long*/
	int shifted;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (bit_shift >= 0)
	{
		shifted = n >> bit_shift--;
		if (shifted & 1)
		{
			_putchar('1');
			break;
		}
	} /*Only start printing when you see a bit set to 1*/
	while (bit_shift >= 0)
	{
		shifted = n >> bit_shift--;
		if (shifted & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
