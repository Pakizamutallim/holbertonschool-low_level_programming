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

	int result = (strtol(argv[2], NULL, 10)) * (strtol(argv[3], NULL, 10));

	printf("%d", result);
}
