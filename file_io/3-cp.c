#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * copy_to - a function that copies the content of a file
 * @file_to: a file copy to
 * @file_from: a file for copy from
 * Return: o
 */

int copy_to(char file_to, char file_from)
{
	char* buffer;
	int of, ot, r, w;

	of = open(file_from, O_RDONLY);

	ot = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (ot < 0)
		return (99);
	buffer = malloc(sizeof(char) * 1024);
	r = read(of, buffer, 1024);
	if (r < 0 || of < 0)
		return (98);

	while (r > 0)
	{
		w = write(ot, buffer, r);
		if (w < 0)
			return (99);
		r = read(of, buffer, 1024);
		if (r < 0)
			return (98);
	}
	c = close(of);
	if (c < 0)
	{
		dprint(STDERR_FILENO, "Error: Can't close fd %d\n", fc);
		return (100);
	}
	ct = close(ot);
	if (ct < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ftc);
		return (100);
	}

	return (0);
}
