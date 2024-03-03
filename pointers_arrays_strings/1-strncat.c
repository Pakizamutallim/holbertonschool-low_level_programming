#include "main.h"

/**
 * _strncat - converts n from string
 *
 * @dest: it is a string
 *
 * @src: it is a another str
 *
 * Return: returns dest
 * @n: bytes
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != 0)
	{
		a++;
	}
	while (src[b] != 0 && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = 0;
	return (dest);
}
