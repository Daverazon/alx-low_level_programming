/*
* Write a program that prints the name of the file it was compiled from,
* followed by a new line.
* You are allowed to use the standard library
*/
/**
 * main - check the code
 *
 * Return: Always 0
*/
#include <stdio.h>

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
