/*
* Write a function that returns the sum of all its parameters.
* If n == 0, return 0
*/
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of integers
 * Return: returns the sum
 * returns 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum = 0;
	unsigned int count = 0;

	va_start(num, n);
	if (n == 0)
	{
		va_end(num);
		return (0);
	}

	while (count++ < n)
		sum += va_arg(num, int);

	va_end(num);
	return (sum);
}
