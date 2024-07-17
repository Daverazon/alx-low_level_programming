#include <stdio.h>
#include <stdlib.h>
#include "../search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {0, 0, 1, 2, 2, 2};
    size_t size = sizeof(array) / sizeof(array[0]);
    int num = 4;

    printf("Found %d at index: %d\n\n", num, interpolation_search(array, size, num));
    /*printf("Found %d at index: %d\n\n", 7, interpolation_search(array, size, 7));
    printf("Found %d at index: %d\n", 999, interpolation_search(array, size, 999));*/
    return (EXIT_SUCCESS);
}
