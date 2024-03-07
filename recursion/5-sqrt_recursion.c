#include "main.h"
#include <stdio.h>

/**
 * my_sqrt_rec - updates the value of the variable
 * _sqrt_recursion - updates the value of the variable
 * @a: the pointer points to to 98
 * @b: pointer to the variable to update
 * @n: it is a n
 * Return: returns result.
 */

int my_sqrt_rec(int a, int b)
{
	if ((b * b) == a)
	{
		return (b);
	}
	if ((b * b) > a)
	{
		return (-1);
	}
	return (my_sqrt_rec(a, b + 1));
}


int _sqrt_recursion(int n)
{
	return (my_sqrt_rec(n, 1));
}
