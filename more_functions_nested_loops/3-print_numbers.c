#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_numbers - check the code.
 * @a: - The number to be checked.
 * Return: 1 for upper letter or 0 for otherwise.
 */

void print_numbers(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	_putchar('\n');
}
