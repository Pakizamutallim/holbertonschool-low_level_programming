#include "main.h"

/**
 * _strlen - returns the length of a string.
 * the pointer points to to 98
 * @s: pointer to the variable to update
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
