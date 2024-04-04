#include <stdio.h>
#include "main.h"

/**
 * print_binary - check the code
 * @n: insugned long int.
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;

	if (n == 0)
		printf('0');
	for (i = 1 << 31; i > 0; i = i / 2)
	{
		if (n & i)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
