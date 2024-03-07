#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - updates the value of the variable
 * @x: the pointer points to to 98
 * @y: pointer to the variable to update
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
