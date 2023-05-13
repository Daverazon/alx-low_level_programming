#include "main.h"

/**
 * check_div - Checks if a number is divisible.
 * @n: The number to be checked.
 * @divisor: The divisor.
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int check_div(int n, int divisor)
{
	if (n % divisor == 0 && divisor != n)
		return (0);
	if (divisor >= n / 2)
		return (1);

	return (check_div(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n < 2)
		return (0);

	return (check_div(n, divisor));
}
