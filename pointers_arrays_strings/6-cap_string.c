#include "main.h"
#include <stdio.h>

/**
 * *cap_string - updates the value of the variable
 * the pointer points to to 98
 * @s: pointer to the variable to update
 * Return: returns result.
 */

char *cap_string(char *s)
{
	int i, j;
	char sprt[13] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != 0; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sprt[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
