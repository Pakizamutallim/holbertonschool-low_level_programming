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
	(void) argc;

	int num = atoi(*argv[2]);
	int num2 = atoi(*argv[3]);

	int result = num * num2;

	printf("%d", result);
}
