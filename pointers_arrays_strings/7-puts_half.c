#include "main.h"
#include <stdio.h>

/**
 * puts_half - updates the value of the variable
 * the pointer points to to 98
 * @str: pointer to the variable to update
 */

void puts_half(char *str)
{
	int i, j; 
	int len = 0;

	while (str[len] != 0)
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2 != 0)
	{
		for (j = (len - 1) / 2; j < len - 1; j++)
		{
			_putchar(str[j + 1]);
		}
	}
	_putchar('\n');
}
