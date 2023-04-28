/*1. Don't swap horses in crossing a stream*/
/*Write a function that swaps the values of two integers*/
#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: integer one
 * @b: integer two
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b =  temp;
}
