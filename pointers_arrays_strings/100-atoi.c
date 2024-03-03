#include "main.h"
#include <stdio.h>

/**
 * _atoi - updates the value of the variable
 *
 * @s: pointer to the variable to update
 *
 * Return: returns result
 */

int _atoi(char *s)
{
	int signs = 1;
	unsigned int sum = 0;
	int x = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == '-')
		{
			signs *= -1;
		}
		else if (*s >= '0' && *s <= '9')
			break;
	}
	while (*s >= '0' && *s <= '9')
	{
		sum *= 10;
		sum += *s - '0';
		s++;
	}
	if (signs == -1)
	{
		x = -sum;
	}
	else
	{
		x = sum;
	}
	return (x);
}
