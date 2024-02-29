#include "main.h"
#include <stdio.h>

/**
 * _puts - updates the value of the variable
 * the pointer points to to 98
 * @n: pointer to the variable to update
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		puts(str[i]);
	_putchar('\n');
}
