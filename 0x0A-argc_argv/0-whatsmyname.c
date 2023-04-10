#include <stdio.h>

/**
 * main - prints the name of this program
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: always returns 0
 */
int main(int argc, char *argv[])
{
	(void)argc;/*silence arguments*/

	printf("%s\n", argv[0]);

	return (0);
}
