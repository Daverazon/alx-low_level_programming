#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings to be passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list margs;
	unsigned int i;
	char *temp;

	va_start(margs, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(margs, char *);

		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);
		if (separator != NULL && i != n - 1)
			printf(", ");
	}
	printf("\n");

	va_end(margs);
}
