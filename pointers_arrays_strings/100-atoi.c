#include "main.h"
#include <stdio.h>

/**
 * _atoi - updates the value of the variable
 * @s: pointer to the variable to update
 */

 int _atoi(char *s)
{
	int i = 0;
	int length = 0;
	int n = 0;
	int f = 0;
	int digit;
	int d;

	while (s[length] != 0)
	{
		length++;
	}
	while (i < length && f == 0)
	{
		if (s[i] == '-')
		{
			++d;
			s[i] *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			if (d % 2)
				digit = digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i +1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return(0);
	return(n);
}
