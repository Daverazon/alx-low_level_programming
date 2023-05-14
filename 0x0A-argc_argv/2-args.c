/*
* Write a program that prints all arguments it receives.
* All arguments should be printed, including the first one
* Only print one argument per line, ending with a new line
*/
#include <stdio.h>

/**
 * main - prints every argument it receives
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: always returns 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *(argv++));
	}

	return (0);
}
