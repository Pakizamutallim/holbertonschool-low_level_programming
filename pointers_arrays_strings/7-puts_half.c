#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - updates the value of the variable
 * the pointer points to to 98
 * @n: pointer to the variable to update
 */

void puts_half(char *str)
{
	int i; 
	int len = 0;

	while (str[len] != 0)
	{
		len++;
	}
	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
