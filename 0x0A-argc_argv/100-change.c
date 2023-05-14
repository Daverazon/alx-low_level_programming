/*
* Write a program that prints the minimum number of coins to make
* change for an amount of money.
* Usage: ./change cents
* where cents is the amount of cents you need to give back
* if the number of arguments passed to your program is not exactly 1,
* print Error, followed by a new line, and return 1
* you should use atoi to parse the parameter passed to your program. If the
* number passed as the argument is negative, print 0, followed by a new line
* You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
*/
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int cents, coins, index, cvalues[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	for (coins = 0, index = 0; cents > 0; index++)
	{
		while (cents - cvalues[index] >= 0)
		{
			coins++;
			cents -= cvalues[index];
		}
	}
	printf("%d\n", coins);
	return (0);
}
