#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - check the code.
 * @c: - The number to be checked.
 * Return: 1 for upper letter or 0 for otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
