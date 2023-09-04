#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file and prints it to the POSIX
 * standard ouptput
 *
 * @filename: The name of the file
 * @letters: The number of letters the function sholud read and print
 *
 * Return: The number of bytes red and printed by the function
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, rfile, wfile;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	rfile = read(file, buffer, letters);
	wfile = write(STDOUT_FILENO, buffer, rfile);

	if (file == -1 || rfile == -1 || wfile != rfile)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file);

	return (wfile);
}
