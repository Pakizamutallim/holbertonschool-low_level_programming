#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	int i = 0;

	if (b != NULL)
	{
		while (b[i] == '0' || b[i] == '1')
		{
			count <<= 1;
			count += b[i] - '0';
			i++;
		}
	}
	else
		return (NULL);
	return (count);
}
