#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_line - function that checks for uppercase character.
 * @n: is the integer for the paramaters of my function
 * Return: 0
 */

int main()
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 5) == 0 && (a % 3) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((a % 5) == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		else if ((a % 3) == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
		}
		else
		{
			printf("%d", a);
		}
		if (a != 100)
		{
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
