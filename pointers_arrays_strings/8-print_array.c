#include "main.h"
#include <stdio.h>

/**
 * print_array - updates the value of the variable
 * *a - the pointer points to to 98
 * @n: pointer to the variable to update
 */

void print_array(int *a, int n)
{
	int i, length;

	while (a[i] <= n)
	{
		if (i != n)
		{
			printf("%d, ", i);
		}
	}
	printf("\n")
}
