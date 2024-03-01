#include "main.h"
#include <stdio.h>

/**
 * _atoi - updates the value of the variable
 * @s: pointer to the variable to update
 */

 int _atoi(char *s)
{
	int i;
	int length = 0;

	while (s[length] != 0)
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		printf("%d", i);
		_putchar('\n');
	}
	_putchar('\n');
}
