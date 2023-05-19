/*
* Write a function that executes a function given as a parameter on
* each element of an array. where size is the size of the array
* and action is a pointer to the function you need to use
*/
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: an array
 * @size: size of the array
 * @action: function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index = 0;

	while (index < size)
	{
		action(array[index++]);
	}
}
