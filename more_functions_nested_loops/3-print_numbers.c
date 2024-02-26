#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_numbers - check the code.
 * @a: The number to be checked.
 */

void print_numbers(void a)
{
	int a = '0';

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
