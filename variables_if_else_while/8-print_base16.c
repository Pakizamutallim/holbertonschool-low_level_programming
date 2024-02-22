#include <stdio.h>
#include <math.h>
/**
 * main - Empty point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = '0';
	int y = 'a';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');

	return (0);
}
