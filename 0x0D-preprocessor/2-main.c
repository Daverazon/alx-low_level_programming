#include <stdio.h>

/**
 * main - prints the name of the program it was compiled from
 *
 * Return: always returns 0
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
