/*
* Write a function that allocates memory using malloc. Returns a pointer to
* the allocated memory if malloc fails, the malloc_checked function
* should cause normal process termination with a status value of 98
*/
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: an integer
 * Return: return pointer to allocated memory
 * on failure, cause normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
