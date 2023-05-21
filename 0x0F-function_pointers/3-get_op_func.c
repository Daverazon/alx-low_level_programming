/*
* This file should contain the function that selects the correct function to
* perform the operation asked by the user. You’re not allowed to declare any
* other function.
* Prototype: int (*get_op_func(char *s))(int, int);
* where s is the operator passed as argument to the program
* This function returns a pointer to the function that corresponds to the
* operator given as a parameter. Example: get_op_func("+") should return a
* pointer to the function op_add
* You are not allowed to use switch statements
* You are not allowed to use for or do ... while loops
* You are not allowed to use goto
* You are not allowed to use else
* You are not allowed to use more than one if statement in your code
* You are not allowed to use more than one while loop in your code
* If s doesn't match any of the 5 expected operators (+, -, *, /, %),returnNULL
* You are only allowed to declare these two variables in this function:
*/
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the
 * operation asked by the user
 * @s: the operator
 * Return: pointer to the selected function
*/
int (*get_op_func(char *s))(int num1, int num2)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}

	return (ops[i].f);
}
