

/**
 * append_text_to_file - appand a text to the end of file
 * @filename: filename
 * @text_content: text content of the file
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}
	fd = open(filename, O_APPEND | O_WRONLY);
	w = write(fd, text_content, i);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
