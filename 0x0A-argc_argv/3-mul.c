/*
* Write a program that multiplies two numbers.
* Your program should print the result of the multiplication,
* followed by a new line
* You can assume that the two numbers and result of the multiplication
* can be stored in an integer
* If the program does not receive two arguments, your program
* should print Error, followed by a new line, and return 1
*/

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	printf("%d\n", atoi(*(argv + 1)) * atoi(*(argv + 2)));

	exit(EXIT_SUCCESS);
}
