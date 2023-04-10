#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: always returns 0
 */
int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc < 2)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
			result *= atoi(argv[i]);

		printf("%d\n", result);
	}

	return (1);
}
