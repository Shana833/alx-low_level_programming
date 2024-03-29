#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 on success, -1 on failure
 *         1 if file exists, -1 if file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int afile, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	afile = open(filename, O_WRONLY | O_APPEND);

	if (afile == -1)
		return (-1);

	wr = write(afile, text_content, len);

	if (wr == -1)
		return (-1);

	close(afile);

	return (1);
}
