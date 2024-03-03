#include <stdio.h>

/**
 * main - prints the highest prime factor of 612852475143
 *
 * Return: 0 if successful
 */

int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int i = 3;

	while (i <= num / 2)
	{
		if (num % i == 0)
		{
			num = num / i;
		}
		else
		{
			i = i + 2;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
