#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 *
 * @format: List of types of argments
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *c, *sep = "";

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ap, double));
					break;
				case 's':
					c = va_arg(ap, char *);
					if (!c)
						c = "(nil)";
					printf("%s%s", sep, c);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
