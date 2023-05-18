/*
* Write a function that reallocates a memory block using malloc and free
* where ptr is a pointer to the memory previously allocated with a call to
* malloc: malloc(old_size), old_size is the size, in bytes, of the allocated
* space for ptr and new_size is the new size, in bytes of the new memory block
* The contents will be copied to the newly allocated space, in the range from
* the start of ptr up to the minimum of the old and new sizes
* If new_size > old_size, the “added” memory should not be initialized
* If new_size == old_size do not do anything and return ptr
* If ptr is NULL, then the call is equivalent to malloc(new_size), for all
* values of old_size and new_size
* If new_size is equal to zero, and ptr is not NULL, then the call is equivalent
* to free(ptr). Return NULL
* Don’t forget to free ptr when it makes sense
*/
#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated with a call to malloc
 * @old_size: allocated space for ptr
 * @new_size: size of new memory block
 * Return: return ptr if new_size == old_size
 * return NULL if new_size == 0 and ptr != NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

}
