#include "main.h"
#include <stdio.h>

/**
 * *_strstr - updates the value of the variable
 * @haystack: it is a string array
 * @needle: it is a substring
 * Return: returns result
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != 0; i++)
	{
		for (j = 0; needle[j] != 0; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (!needle[j])
			return (haystack);
	}
	return (0);
}
