#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: result of operation
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: result of operation
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: result of operation
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two number
 * @a: first number
 * @b: second integer
 * Return: result of operation
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		return (100);
	}
	return (a / b);
}

/**
 * op_mod - modulus
 * @a: first integer
 * @b: second integer
 * Return: result of operation
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (100);
	}
	return (a % b);
}
