#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: 0.
 */

int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min) + 1);

	if (!array)
		return (NULL);
	else
	{
		for (i = 0; min <= max; i++)
		{
			array[i] = min++;
		}
		return (array);
	}
}
