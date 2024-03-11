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

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		if (arr == NULL)
		{
			return (NULL);
		}
		arr[i] = c;
	}
	return (arr);
}
