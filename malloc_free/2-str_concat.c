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
	array = malloc(i * sizeof(char) + j * sizeof(char));

	printf("%s " "%s\0\n", s1[i] s2[j]);
	
	if (array == NULL)
		return (NULL);


	return (array);
}
