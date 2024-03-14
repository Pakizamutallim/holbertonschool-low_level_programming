#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - check the code
 * @b: size of the memory block to be allocated
 * Return: Always pointer.
 */

void *malloc_checked(unsigned int b)
{
	int *array;

	array = malloc(b);

	if (array == NULL)
	{
		exit(98);
	}

	return(array);
}
