#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - operator addition
 * @a: number
 * @b: number
 * Return: Operation a + b = result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Operator subtraction
 * @a: number
 * @b: number
 * Return: Operation a - b = result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Operator multiplication
 * @a: number;
 * @b: number;
 * Return: Operation a * b = result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Operator division
 * @a: number
 * @b: number
 * Return: Operation a / b = result
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
 * op_mod - Operator modulo
 * @a: number
 * @b: number
 * Return: Operation a % b = result
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
