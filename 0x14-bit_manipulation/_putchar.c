#include "main.h"
#include <unistd.h>

/**
 * _putchar - Function that writes a given character to stdout
 *
 * @c: The character to be written on stdout
 *
 * Return: 1 (Success), -1 (Failure)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
