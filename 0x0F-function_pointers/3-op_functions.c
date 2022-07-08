#include "3-calc.h"

/**
 * op_add - adds two numbers 
 * @a: first number
 * @b: second number 
 *
 * Return: add
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers.
 * @a: first number 
 * @b: second number
 *
 * Return: differenc
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: multiplication
 */

int op_mul(int a, in b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers 
 * @a: first number
 * @b: second number
 *
 * Return: division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the module of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: remainder of the divions.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
