#include <stdio.h>
#include <stdlib.h>

/**
 * main - updates the value of the variable
 * @argc:the pointer points to to 98
 * @argv: pointer to the variable to update
 * Return: returns result.
 */

int main(int argc, char *argv[])
{
	int i = 0, num = 0, cent = 0;
	char currency[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[1][0] == 45)
	{
		printf("0\n");
	}
	else
	{
		num = atoi(argv[1]);
		while (currency[i] < 5)
		{
			while (num >= i)
			{
				num = num - i;
				cent++;
				if (i == 1)
				{
					cent++;
				}
			}
		}
	}
	printf("%d\n", cent);

	return (0);
}
