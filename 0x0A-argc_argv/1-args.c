#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: always returns 0
 */
int main(int argc, char *argv[])
{
	(void)argv;/*silence arguments*/

	printf("%d\n", argc);

	return (0);
}
