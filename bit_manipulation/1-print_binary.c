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
	int binary = sizeof(n) * 8 - 1;

	if (n == 0)
		printf("%d", '0');
	for (i = 0; binary >= 0; i++)
	{
		if (n >> binary & 1)
		{
			printf("%d", '1');
		}
		else if (i)
		{
			printf("%d", '0');
		}
		binary--;
	}
}
