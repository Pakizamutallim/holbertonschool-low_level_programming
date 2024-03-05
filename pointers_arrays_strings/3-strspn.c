#include "main.h"
#include <stdio.h>

/**
 * _strspn - updates the value of the variable
 * @s: the pointer points to to 98
 * @accept: a number of array
 * Return: returns result.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		}
		if (!accept[j])
			break;
	}
	return (count);
}
