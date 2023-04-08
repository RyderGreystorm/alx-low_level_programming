#include "main.h"

/**
 * create_file - creates a file and writes into the file
 * @filename: pointer to the buffer where chars is stored
 * @text_content: string
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		len = strlen(text_content);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
		return (-1);
	close(fd);
	return (1);
}
