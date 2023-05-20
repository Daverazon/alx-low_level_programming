/*
* Write a function that prints argsings, followed by a new line.
* where separator is the argsing to be printed between the argsings
* and n is the number of argsings passed to the function
* You are allowed to use printf
* If separator is NULL, don’t print it
* If one of the argsing is NULL, print (nil) instead
* Print a new line at the end of your function
*/
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the string
 * @n: number of strings to be passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	va_list args;
	char *str;

	va_start(args, n);
	while (count++ < n)
	{
		str = va_arg(args, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && count < n)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(args);
}
