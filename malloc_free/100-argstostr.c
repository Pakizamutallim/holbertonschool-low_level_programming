#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 0, len2 = 0;
	char *array;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}

	len += ac;

	array = malloc(sizeof(char) * len + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			array[len2] = av[i][j];
			len2++;
		}
		if (array[len2] == 0)
			array[len2++] = '\n';
	}
	return (array);
}
