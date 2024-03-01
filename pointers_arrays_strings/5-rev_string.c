#include "main.h"
#include <stdio.h>

/**
 * rev_string - updates the value of the variable
 * the pointer points to to 98
 * @s: pointer to the variable to update
 */

void rev_string(char *s)
{
	char c;
	int i;

	int len = 0;
	int length = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	length = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[length];
		s[length--] = c;
	}
}
