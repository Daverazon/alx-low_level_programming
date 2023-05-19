/*Write a function that prints a name.*/
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!(name && f))
		return (NULL);

	f(name);
}
