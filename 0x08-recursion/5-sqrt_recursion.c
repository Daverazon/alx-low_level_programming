#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	int sqrt = 1;

	if (n <= 0)
		return (-1);
	else if (n == 1)
		return (1);

	return (find_sqrt(n, sqrt));
}

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @n: The number to find the square root of.
 * @sqrt: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int find_sqrt(int n, int sqrt)
{
	if (sqrt * sqrt == n)
		return (sqrt);

	if (n / 2 == sqrt)
		return (-1);

	return (find_sqrt(n, sqrt + 1));
}
