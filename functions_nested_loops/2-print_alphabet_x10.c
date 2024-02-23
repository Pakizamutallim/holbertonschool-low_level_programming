#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Empty point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int x = 'a', y;

	while(x < 'z')
	{
		y = 0
		while (y < 10)
		{
			_putchar(y);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
