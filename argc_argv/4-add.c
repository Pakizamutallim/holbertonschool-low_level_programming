#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - updates the value of the variable
 * @argc:the pointer points to to 98
 * @argv: pointer to the variable to update
 * Return: returns result.
 */

int main(int argc, char *argv[])
{
	int i, num;

	int result = 0;

	for (i = 1; i < argc; i++)
	{
		num = atoi(*argv[i]);

		if (strlen(argv[i]) != strspn(argv[i], "0123456789"))
		{
			printf("Error\n");
			return (0);
		}
		else
		{
			result = result + num;
		}
	}
	printf("%d\n", result);
	return (0);
}
