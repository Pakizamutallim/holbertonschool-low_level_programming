#include "main.h"
#include <stdio.h>

/**
 * - check the code
 *
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum_1 = 0;
	unsigned int sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		int l = size * i;

		sum_1 = sum_1 + a[l + i];
		sum_2 = sum_2 + a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d", "%s", sum_1, sum_2);
}
