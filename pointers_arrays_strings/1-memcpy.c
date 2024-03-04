#include "main.h"
#include <stdio.h>

/**
 * *cap_string - updates the value of the variable
 * the pointer points to to 98
 * @s: pointer to the variable to update
 * Return: returns result.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	for (i = 0; i < n; i++)
	{
		for(j = 0; j <= i; j++)
		{
			src[i] = dest[j];
		}
	}
	return (dest);
}
