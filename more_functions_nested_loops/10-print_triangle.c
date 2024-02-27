#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_triangle - function that checks for uppercase character.
 * @size: is the integer for the paramaters of my function
 * Return: 0
 */


void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(35);
				_putchar('\n');
			}
			_putchar(35);
		}
	}
	else
	{
		_putchar('\n');
	}
}
