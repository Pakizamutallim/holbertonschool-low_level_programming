#include "main.h"
#include <stdio.h>

/**
 * reverse_array - updates the value of the variable
 * @a: the pointer points to to 98
 * @n: pointer to the variable to update
 */

void reverse_array(int *a, int n)
{
	int i, b, rev;

	i = 0;
	b = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		rev = a[i];
		a[i] = a[b];
		a[b--] = rev;
	}

}
