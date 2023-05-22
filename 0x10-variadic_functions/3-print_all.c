/*
* Write a function that prints anything.
* where format is a list of types of arguments passed to the function
* c: char
* i: integer
* f: float
* s: char * (if the string is NULL, print (nil) instead
* any other char should be ignored. see example
* You are not allowed to use for, goto, ternary operator, else, do ... while
* You can use a maximum of
* 2 while loops
* 2 if
* You can declare a maximum of 9 variables
* You are allowed to use printf
* Print a new line at the end of your function
*/
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything passed to it
 * @format: list of types of arguments passed to the function
 *
 * Description: c: char, i: integer, f: float, s: char * (if string is NULL,
 * it prints (nil) instead
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int index = 0;
	float fl;
	char *str;

	va_start(args, format);
	while (format && format[index])
	{
		switch (format[index])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'f':
				fl = va_arg(args, double);
				printf("%f", fl);
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if ((format[index] == 'i' || format[index] == 'c' ||
		 format[index] == 'f' || format[index] == 's') && format[index + 1])
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(args);
}
