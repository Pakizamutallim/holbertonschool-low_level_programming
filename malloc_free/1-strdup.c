#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - check the code
 * @str: is array to copy
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *array;
	int i, j;

	if (str != NULL)
	{
		for (i = 0; str[i] != 0; i++)
		{
			;
		}

		array = malloc((i + 1) * sizeof(char));

		if (array != NULL)
		{
			for (j = 0; str[j] != 0; j++)
			{
				array[j] = str[j];
			}
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
	array[j] = 0;
	return (array);
}