#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion- updates the value of the variable
 * the pointer points to to 98
 * @s: pointer to the variable to update
 * Return: returns result.
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
