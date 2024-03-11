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
	char *array = malloc(strlen(str) * sizeof(char));
	int i, j;

	if (str == NULL)
		return (NULL);
	else
	{
		for (i = 0; str[i] < strlen[str]; i++)
		{
			if (array == NULL)
			{
				return (NULL);
			}
			else
			{
				for (j = 0; array[j] < str[i]; j++)
				{
					array[j] = str[i];
				}
			}
		}
	}
	return (array);
}
