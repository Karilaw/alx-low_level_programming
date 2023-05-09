#include "main.h"

/**
 * append_text_to_file - appends text
 * @filename: filename
 * @text_content: string to add at the end of file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		if (write(fd, text_content, len) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
