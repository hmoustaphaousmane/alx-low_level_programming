#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it to the POSIX
 * standard output
 *
 * @filename: Name of the file to be red
 * @letters: Number of letters the function should read and print
 *
 * Return: Actual number of letters red and printed (Success), 0 (Failure)
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
