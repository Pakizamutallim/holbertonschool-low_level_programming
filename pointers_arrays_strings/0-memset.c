#include "main.h"

/**
 * *_memset - updates the value of the variable
 * @b: the pointer points to to 98
 * @n: a number of *s pointers
 * @s: pointer to the variable to update
 * Return: returns result.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
