#include "main.h"

/**
 * read_textfile - reads text from a buffer
 * @filename: pointer to buffer
 * @letters: bytes of chars to be read from buffer
 * Return: number of letters it should read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t wr;
	char *buffer;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, letters);

	free(buffer);
	close(fd);
	return (wr);

}
