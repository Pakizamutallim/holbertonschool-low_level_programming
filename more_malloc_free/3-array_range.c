#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: 0.
 */

int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; min <= max; i++)
		{
			array[i] = min++;
		}
		return (array);
	}
}
