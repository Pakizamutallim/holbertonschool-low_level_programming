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
	if (c >= 0 && c <= 9)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
