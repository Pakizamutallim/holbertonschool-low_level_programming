#include "main.h"

/**
 * _strlen - returns the length of a string.
 * Return: the length of the string.
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
