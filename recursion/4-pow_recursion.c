#include "main.h"
#include <stdio.h>

/**
 * *cap_string - updates the value of the variable
 * the pointer points to to 98
 * @s: pointer to the variable to update
 * Return: returns result.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return ((_pow_recursion(x, y - 1) * x));
}
