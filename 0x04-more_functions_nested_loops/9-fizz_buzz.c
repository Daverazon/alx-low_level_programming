#include <stdio.h>

/**
 * main - prints 1-100 replacing multiples of 3 and 5 with Fizz and
 * Buzz respectively
 *
 * Return: Always returns 0
 */
int main(void)
{
	int i;

	putchar('1');
	for (i = 2; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf(" Fizz");
		else if (i % 3 != 0 && i % 5 == 0)
			printf(" Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else
			printf(" %d", i);
	}
	putchar('\n');
	return (0);
}
