#include <stdio.h>
/*
 * File: 2-print_alphabet.c
 * */

int main(void)
{
	char x;
	for(x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return 0;
}
