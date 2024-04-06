#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, nm = n ^ m;

	while (nm > 0)
	{
		i = i + (nm & 1);
		nm >>= 1;
	}

	return (i);
}
