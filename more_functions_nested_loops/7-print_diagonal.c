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
	int i, x;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x > i; x++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
