/*
* Write a program that prints its name, followed by a new line.
* If you rename the program, it will print the new name, without
* having to compile it again
* You should not remove the path before the name of the program
*/
#include <stdio.h>

/**
 * main - prints the name of this program
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: always returns 0
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);

	return (0);
}
