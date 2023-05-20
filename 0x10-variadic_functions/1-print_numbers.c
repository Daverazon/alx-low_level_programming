/*
* Write a function that prints numbers, followed by a new line.
* where separator is the string to be printed between numbers
* and n is the number of integers passed to the function
* You are allowed to use printf
* If separator is NULL, don’t print it
* Print a new line at the end of your function
*/
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between the numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	va_list num;

	va_start(num, n);
	while (count++ < n)
	{
		printf("%d", va_arg(num, int));
		if (separator && count < n)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(num);
}
