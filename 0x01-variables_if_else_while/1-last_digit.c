#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - compares the value of the last digit to 0, 5 and 6
 *
 * Return: Always return 0
 */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (d < 6 && d != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
	else if (d == 0)
		printf("Last digit of %d is %d and is 0\n", n, d);
	else
		printf("Last digit of %d is %d and is greater than 5\n", n, d);
	return (0);
}
