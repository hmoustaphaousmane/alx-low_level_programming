#include "main.h"

/**
 * _buffer - Function that allocates 1024 bytes for a buffer
 *
 * @filename: The name of the file
 *
 * Return: The buffer
 */
char *_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}

/**
 * _close - Function that closes a file descriptor
 *
 * @fd: The file descriptor to be closed
 */
void _close(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point of the program that copies the content of a file to
 * another file
 *
 * @argc: Arguments count
 * @argv: Arguments values (an array)
 *
 * Return: Always 0 (Succuss)
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rfile, wfile;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = _buffer(argv[2]);
	file_from = open(argv[2], O_RDONLY);
	rfile = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do
	{
		if (file_from == -1 || rfile == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wfile = write(file_to, buffer, rfile);
		if (file_to == -1 || wfile == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rfile = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rfile > 0);

	free(buffer);
	_close(file_from);
	_close(file_to);

	return (0);
}
