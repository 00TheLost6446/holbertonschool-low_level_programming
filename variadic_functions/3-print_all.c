#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything, based on a format string
 * @format: list of argument types: c (char), i (int), f (float), s (string)
 *
 * Any other character in format is ignored.
 * A NULL string is printed as (nil). A new line is printed at the end.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s, *sep = "";

	va_start(ap, format);
	while (format && format[i])
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
			s = va_arg(ap, char *);
			if (!s)
				s = "(nil)";
			printf("%s%s", sep, s);
			break;
		default:
			i++;
			continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(ap);
}
