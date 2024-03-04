#include "main.h"
#include <stdio.h>

/**
 * *_strchr - updates the value of the variable
 * @c: the pointer points 
 * @s: pointer to the variable to update
 * Return: returns result.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
