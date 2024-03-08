#include <stdio.h>
#include <stdlib.h>

/**
 * main - it is a program for program
 * @argc: This is the number of arguments
 * @argv: This is the array of arguments
 * Return: returns result.
 */

int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result = result * (strtol(argv[i], NULL, 10));
		}
	}
	printf("%i\n", result);

	return (0);
}
