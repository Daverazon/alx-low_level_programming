/*
* This file should contain the 5 following functions (not more):
* op_add: returns the sum of a and b.
* Prototype: int op_add(int a, int b);
* op_sub: returns the difference of a and b.
* Prototype: int op_sub(int a, int b);
* op_mul: returns the product of a and b.
* Prototype: int op_mul(int a, int b);
* op_div: returns the result of the division of a by b.
* Prototype: int op_div(int a, int b);
* op_mod: returns the remainder of the division of a by b.
* Prototype: int op_mod(int a, int b);
*/
#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: the sum of two numbers
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: the difference between two numbers
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: the product of two numbers
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: the result of the integer division of two numbers
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divides two numbers
 * @a: first number
 * @b: second number
 * Return: the remainder of the division of two numbers
*/
int op_mod(int a, int b)
{
	return (a % b);
}
