#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always return 0
 */
int main(void)
{
	int count;
	unsigned long int a, b, fib;

	fib = 2, a = 1, count = 3;
	printf("1, 2, ");
	while (count < 98)
	{
		b = fib;
		fib += a;
		printf("%lu, ", fib);
		a = b;
		count++;
	}
	fib += a;
	printf("%lu\n", fib);
	return (0);
}
