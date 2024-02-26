#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_line - check the code.
 * @n: It is a num.
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
