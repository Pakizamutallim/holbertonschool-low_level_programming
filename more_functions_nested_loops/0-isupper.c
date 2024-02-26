#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - check the code.
 * @c - is a letter.
 * Return: 1 for upper letter or 0 for otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
