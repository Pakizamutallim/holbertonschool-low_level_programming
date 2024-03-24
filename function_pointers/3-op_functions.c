#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition function
 * @a: first integer value
 * @b: second integer value
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - addition function
 * @a: first integer value
 * @b: second integer value
 * Return: sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - addition function
 * @a: first integer value
 * @b: second integer value
 * Return: mul
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - addition function
 * @a: first integer value
 * @b: second integer value
 * Return: div
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
 * op_mod - addition function
 * @a: first integer value
 * @b: second integer value
 * Return: mod
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
