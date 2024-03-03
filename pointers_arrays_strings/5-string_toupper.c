#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - updates the value of the variable
 * the pointer points to to 98
 * @s: pointer to the variable to update
 *
 * Return: returns result
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
