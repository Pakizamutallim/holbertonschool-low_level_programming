#include <stdio.h>
#include "main.h"

/**
 * get_bit - check the code
 * @n: it is number
 * @index: it is a indef of n
 * Return: Always 0.
 */


int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	unsigned long int bit = n >> index;
	return (bit & 1);
}
