#include <stdio.h>
#include "main.h"
/**
 * _islower - Checks if a character is lowercase.
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
