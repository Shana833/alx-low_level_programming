#include "main.h"
#define BUFF_SIZE 1024
/**
 * main - program entry point, checks files and copies content
 * @argc: number of command arguments
 * @argv: array of command arguments (strings)
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, written, char_read = BUFF_SIZE;
	char buffer[BUFF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
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
	do {
		char_read = read(file_from, buffer, BUFF_SIZE);
		if (char_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
				close(file_from), close(file_to), exit(98);

		written = write(file_to, buffer, char_read);
		if (written < char_read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
				exit(99);
	}
	while (char_read == BUFF_SIZE);
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
