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
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
