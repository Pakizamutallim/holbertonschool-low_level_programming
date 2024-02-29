#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - updates the value of the variable
 * the pointer points to to 98
 * @s: pointer to the variable to update
 */

void print_rev(char *s)
{
	int i, j, length;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	length = j;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}