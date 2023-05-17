/*
* Write a function that creates an array of chars,
* and initializes it with a specific char.
* Returns NULL if size = 0
* Returns a pointer to the array, or NULL if it fails
*/
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 * @size: array size
 * @c: char for initializing the array
 * Return: Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
    unsigned int return_to_start_address = size;
    char *arr = malloc(sizeof(char) * size);

    if (size < 1 || arr == NULL)
        return (NULL);

    while (size--)
        *arr++ = c;

    arr -= return_to_start_address;

    return (arr);
}
