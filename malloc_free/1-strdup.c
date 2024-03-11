#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *array;
	int i, j;

	if (str == NULL)
		return (NULL);
	else
	{
		for (i = 0; str[i] != 0; i++)
		{
			array = malloc(sizeof(char));
			if (array == NULL)
			{
				return (NULL);
			}
			else
			{
				for (j = 0; array[j] != 0; j++)
				{
					array[j] = str[i];
				}
			}
		}
	}
	return (array);
}
