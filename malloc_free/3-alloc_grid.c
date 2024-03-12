#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - prints buffer in hexa
 * @width: the address of memory to print
 * @height: the size of the memory to print
 *
 * Return: 0.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(arrat[i]);
			}
			freei(array);
			return(NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
