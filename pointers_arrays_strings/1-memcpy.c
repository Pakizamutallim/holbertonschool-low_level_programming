#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - updates the value of the variable
 * @dest: the pointer points to to 98
 * @n: a number of array
 * @src: pointer to the variable to update
 * Return: returns result.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
