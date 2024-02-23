#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Checks if a character is lowercase.
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int a, b;
	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b ++)
		{
			if (a < 10)
			{
				_putchar('0');
				_putchar((a % 10) + '0');
			}
			else
			{
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
			_putchar(58);
			if (b < 10)
			{
				_putchar('0');
				_putchar((b % 10) + '0');
			}
			else 
			{
				_putchar((b / 10) + '0');
				_putchar((b % 10) + '0');
			}
			_putchar('\n');
			b++;
		}
		b = 0;
		a++;
	}
}
