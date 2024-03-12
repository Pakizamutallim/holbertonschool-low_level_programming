#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat- prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: the size of the memory to print
 *
 * Return: 0.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *array;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	while (s1[i] != 0)
	{
		i++;
	}
	while (s2[j] != 0)
	{
		j++;
	}
	array = malloc(i * sizeof(char) + j * sizeof(char) + 1);

	if (array == NULL)
		return (NULL);
	char *tmp1 = s1;

	char *tmp2 = s2;

	while (*tmp1)
	{
		*array = *tmp1;
		array++;
		tmp1++;
	}

	while (*tmp2)
	{
		*array = *tmp2;
		array++;
		tmp2++;
	}

	return (array);
}
