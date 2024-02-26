#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_most_numbers- check the code.
 */

void print_most_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		_putchar(a);
		a++;
		if (a == 50 || a == 52)
		{
			continue;
		}
	}
	_putchar('\n');
}
