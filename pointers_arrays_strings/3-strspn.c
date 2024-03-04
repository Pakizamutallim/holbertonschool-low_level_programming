#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - updates the value of the variable
 * @dest: the pointer points to to 98
 * @n: a number of array
 * @src: pointer to the variable to update
 * Return: returns result.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
			}
		}
	}
	return (count);
}
