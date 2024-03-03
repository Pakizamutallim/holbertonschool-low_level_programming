#include "main.h"

/**
 * print_number - prints an arbitrary integer using putchar
 * @n: string to be encoded
 */
void print_number(int n)
{
	unsigned int m, x;

	if (n < 0)
	{
		m = -n;
		_putchar(45);
	}
	else
	{
		m = n;
	}

	x = m / 10;
	do
	{
		if (x <= m || x == 1)
			_putchar(m / x % 10 + '0');
		x = x / 10;
	}
	while (x != 0);
}
