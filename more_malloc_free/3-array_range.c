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
	int j = 0;
	char *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min) + 1);

	if (!array)
		return (NULL);
	else
	{
		for (i = min; i <= max; i++)
		{
			array[j] = i;
			j++
		}
		return (array);
	}
}
