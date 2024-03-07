#include "main.h"
#include <stdio.h>

/**
 * *cap_string - updates the value of the variable
 * the pointer points to to 98
 * @s: pointer to the variable to update
 * Return: returns result.
 */

int my_is_prime(int n)
{
	if (n == 0 || n == 1)
	{
		return (0);
	}

	return (my_is_prime(n, n - 1));
}

int is_prime_number(int n)
{
	return (my_is_prime(n, 2));
}
