#include "main.h"
#include <stdio.h>

/**
 * print_array - updates the value of the variable
 * *a - the pointer points to to 98
 * @n: pointer to the variable to update
 */

void print_array(int *a, int n)
{
	int i;

	while (a[i] <= n)
	{
		i++;

		if (a[i] == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
