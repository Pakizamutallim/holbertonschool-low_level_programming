#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_line - function that checks for uppercase character.
 * @n: is the integer for the paramaters of my function
 * Return: 0
 */

int main()
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if ((a % 3) == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar(32);
		}
		else if ((a % 5) == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(32);
		}
		else
		{
			printf("%d ", a);
		}
		_putchar('\n');
	}
}
