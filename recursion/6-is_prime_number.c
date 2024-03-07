#include "main.h"
#include <stdio.h>

/**
 * my_is_prime - updates the value of the variable
 * @n: the pointer points to to 98
 * @a: pointer to the variable to update
 * Return: returns result.
 */

int my_is_prime(int n, int a)
{
	if (n == a)
	{
		return (1);
	}
	if (n % a == 0)
	{
		return (0);
	}
	if (n < 0)
		return (0);

	return (my_is_prime(n, a + 1));
}
/**
 * is_prime_number - updates the value of the variable
 * @n: it is a number
 * Return: returns result
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1)
	{
		return (0);
	}
	return (my_is_prime(n, 2));
}
