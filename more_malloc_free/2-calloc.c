#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *array;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (nmemb * size); i++)
			array[i] = 0;
		return (array);
	}
}
