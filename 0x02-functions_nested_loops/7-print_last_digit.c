#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number whose last digit will be printed
 *
 * Return: Always returns the value of the last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last *= -1;

	_putchar(last + '0');

	return (last);
}
