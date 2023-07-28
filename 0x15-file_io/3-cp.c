#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_error - prints error message if errors occur while opening file
 * @file_from: file from
 * @file_to: file to
 * @argv: array of command arguments
 */
void print_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - program entry point, checks files and copies content
 * @argc: number of command arguments
 * @argv: array of command arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t char_read, written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0644);
	print_error(file_from, file_to, argv);

	char_read = 1024;
	while (char_read == 1024)
	{
		char_read = read(file_from, buffer, 1024);
		if (char_read == -1)
			print_error(-1, 0, argv);

		written = write(file_to, buffer, char_read);
		if (written == -1)
			print_error(0, -1, argv);
	}

	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
