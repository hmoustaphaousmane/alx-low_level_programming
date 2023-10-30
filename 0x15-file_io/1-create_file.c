#include "main.h"

/**
 * create_file - Function that creates a file
 *
 * @filename: Name of the file to be created
 * @text_content: NULL terminated pointer to be written to filename
 *
 * Return: 1 (Success), -1 (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int file, wfile, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size]; size++)
			;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wfile = write(file, text_content, size);

	if (file == -1 || wfile == -1)
		return (-1);

	close(file);
	return (1);
}
