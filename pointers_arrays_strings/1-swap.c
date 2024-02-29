#include "main.h"

/**
 * swap_int - updates the value of the variable
 * @a: a pointer for first value
 * @b: a pointer for second value
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
