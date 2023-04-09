#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of file to be oeprated on
 * @text_content: data stored in buffer
 * Return: 1 for success and -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num = 0, wr;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (num = 0; text_content[num];)
			num++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, num);

	if (fd == -1 || wr == -1)
		return (-1);
	close(fd);
	return (1);
}
