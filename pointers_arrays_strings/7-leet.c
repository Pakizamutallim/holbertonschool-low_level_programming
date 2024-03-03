#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */

char *leet(char *s)
{
	int a, b;

	char *lets = "aAeEoOtTlL";
	char *nums = "4433007711";

	for (a = 0; s[a] != 0; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (s[a] == lets[b])
			{
				s[a] = nums[b];
			}
		}
	}
	return (s);
}
