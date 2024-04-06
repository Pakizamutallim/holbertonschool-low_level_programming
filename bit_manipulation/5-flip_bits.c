#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: A pointer to the bit.
 * @m: a pointer.
 *
 * Return: 0
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
