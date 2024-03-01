#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * reset_to_98 - updates the value of the variable
 * the pointer points to to 98
 * @n: pointer to the variable to update
 */


void puts2(char *str)
{
	int i;
	int len = 0;

	while (str[len] != 0)
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
