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
	unsigned int i;
	va_list nums;

	if (separator == NULL)
		return;

	va_start(nums, n);

	printf("%d", va_arg(nums, int));

	for (i = 1; i < n; i++)
		printf("%s%d", separator, va_arg(nums, int));
	printf("\n");

	va_end(nums);
}
