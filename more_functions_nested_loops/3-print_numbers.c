#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_numbers - check the code.
 */

void print_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
