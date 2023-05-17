/*
* Write a program that adds positive numbers.
* Print the result, followed by a new line
* If one of the number contains symbols that are not digits,
* print Error, followed by a new line, and return 1
* You can assume that numbers and the addition of all
* the numbers can be stored in an int
*/
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int arr_index, sum = 0;
	char *str_start;

	for (arr_index = 1; arr_index < argc; sum += atoi(str_start), arr_index++)
	{
		str_start = argv[arr_index];
		while (*argv[arr_index])
		{
			if ((*argv[arr_index] < '0' || *argv[arr_index] > '9')
			 && *argv[arr_index] != '-')
			{
				printf("Error\n");
				return (0);
			}
			argv[arr_index]++;
		}
	}

	printf("%d\n", sum);
	return (0);
}
