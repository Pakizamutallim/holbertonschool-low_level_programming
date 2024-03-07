#include "main.h"
#include <stdio.h>

/**
 * factorial- updates the value of the variable
 * the pointer points to to 98
 * @n: pointer to the variable to update
 * Return: returns result.
 */

int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (0);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * (factorial(n - 1)));
}
