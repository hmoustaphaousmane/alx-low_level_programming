#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 *
 * @filename: Name of the file
 * @text_content: NULL terminated string to add at the end of the file filename
 *
 * Return: 1 (Success), -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wfile, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		for (size = 0; text_content[size]; size++)
			;

	file = open(filename, O_WRONLY | O_APPEND);
	wfile = write(file, text_content, size);

	if (file == -1 || wfile == -1)
		return (-1);

	close(file);
	return (1);
}
