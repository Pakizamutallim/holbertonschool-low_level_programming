#include <stdio.h>
#include "main.h"
/**
 * main - Empty point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int x = 0, y;

	while(x < 10)
	{
		y = 'a';
		while (y < 'z')
		{
			_putchar(y);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
