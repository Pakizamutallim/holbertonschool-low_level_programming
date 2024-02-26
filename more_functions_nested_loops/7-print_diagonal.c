#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_diagonal - function that checks for uppercase character.
 * @n: is the integer for the paramaters of my function
 * Return: 0
 */

void print_diagonal(int n)
{
	int i = 0;

	if (i > 0)
	{
		while (i > n)
		{
			_putchar(92);
			_putchar(32);
		}
	}
	else
	{
		_putchar('\n');
	}
}
