#include "main.h"
#include <stdio.h>

/**
 * _strcmp - updates the value of the variable
 * the pointer points to to 98
 * @s1: variable to update
 * @s2: it is a variable
 *
 * Return: returns a result
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
