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
	int a, b, c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = size; b > a; b--)
			{
				_putchar(32);
			}
			for (c = 0; c < a; c++)
			{
				_putchar(35);
			}
			_putchar(35);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
