#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX standard stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters
 *
 * Return: If the function fails or filename is NULL - 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, r, w;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (fd == -1 || w == -1 || r == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);

	return (w);
}