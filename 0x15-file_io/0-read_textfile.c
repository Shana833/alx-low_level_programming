#include "main.h"
/**
 * read_textfile- reads a text file and prints to POSIX standard output
 * @filename: text file to be read
 * @letters: number of letters to read and print
 * Return: number of letters read and printed
 * 0 if function or write fails, or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t wr;
	ssize_t rd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(fd);
	return (wr);
}
