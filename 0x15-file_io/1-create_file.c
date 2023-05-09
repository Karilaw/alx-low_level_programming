#include "main.h"

/**
 * create_file - creates a file and writes a string to it
 * @filename: name of the file
 * @text_content: NULL terminated string
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;
	size_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		n_written = write(fd, text_content, len);
		if (n_written == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
