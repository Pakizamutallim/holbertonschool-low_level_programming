#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * more_numbers - check the code.
 * @a: It is a integer.
 * @b: It is a int.
 */

void more_numbers(void a b)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar('1');
			}
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
