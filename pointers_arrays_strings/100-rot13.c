#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: the resulting string
 */

char *rot13(char *s)
{
	int a, b;
	char *lets = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != 0; a++)
	{
		for (b = 0; lets[b] != 0; b++)
		{
			if (s[a] == lets[b])
			{
				s[a] = rot[b];
				break;
			}
		}
	}
	return (s);
}
