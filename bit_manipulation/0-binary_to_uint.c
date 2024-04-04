#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - check the code
 *
 * @b: pointer
 *
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] == '0' || b[i] == '1')
	{
		count <<= 1;
		count += b[i] - '0';
		i++;
	}
	if (b[i] != '\0')
	{
		return (0);
	}
	return (count);
}
