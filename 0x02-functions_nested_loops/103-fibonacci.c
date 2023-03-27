#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always return 0
 */
int main(void)
{
	long int sum, a, b, fib;

	fib = 2, a = 1, sum = 2;
	while (fib < 4000000)
	{
		b = fib;
		fib += a;
		if (fib % 2 == 0 && fib < 4000000)
			sum += fib;
		a = b;
	}
	printf("%ld\n", sum);
	return (0);
}
