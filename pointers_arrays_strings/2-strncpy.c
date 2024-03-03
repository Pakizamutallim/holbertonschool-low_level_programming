#include "main.h"
#include <stdio.h>

/**
 * _strncpy - updates the value of the variable
 * @dest: destination to copy
 * @src: a file for copy
 * @n: pointer to the variable to update
 *
 * Return: it returns a file
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (dest[a] != 0 && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = 0;
		a++;
	}

	return (dest);
}
