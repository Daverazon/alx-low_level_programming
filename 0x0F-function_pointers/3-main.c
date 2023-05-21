/*
* Write a program that performs simple operations.
* You are allowed to use the standard library
* Usage: calc num1 operator num2
* You can assume num1 and num2 are integers, so use the atoi function to
* convert them from the string input to int
* operator is one of the following:
* +: addition
* -: subtraction
* *: multiplication
* /: division
* %: modulo
* The program prints the result of the operation, followed by a new line
* You can assume that the result of all operations can be stored in an int
* if the number of arguments is wrong, print Error, followed by a new line,
* and exit with the status 98
* if the operator is none of the above, print Error, followed by a new line,
* and exit with the status 99
* if the user tries to divide (/ or %) by 0, print Error, followed by a new
* line, and exit with the status 100
* This task requires that you create four different files.
*/
/*3-MAIN.C*/
/*
* This file should contain your main function only.
* You are not allowed to code any other function than main in this file
* You are not allowed to directly call op_add, op_sub, op_mul, op_div or
* op_mod from the main function
* You have to use atoi to convert arguments to int
* You are not allowed to use any kind of loop
* You are allowed to use a maximum of 3 if statements
*/
#include "3-calc.h"

/**
 * main - acts as a calculator
 * @argc: number of arguments
 * @argv: arguments to main
 * Return: 0 if arguments are appropriate
*/
int main(int argc, char *argv[])
{
	char *operator;
	int num1, num2;
	func_ptr operation;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	operation = get_op_func(operator);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(97);
	}

	printf("%d\n", operation(num1, num2));
	return (0);
}
