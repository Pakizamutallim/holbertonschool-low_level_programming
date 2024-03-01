#include "main.h"
#include <stdio.h>

/**
 * _strcpy - updates the value of the variable
 * the pointer points to to 98
 * @src: pointer to the variable to update
 * @dest: pointer to the variable to update
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;

	return (dest);
}
