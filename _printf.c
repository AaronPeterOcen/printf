#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - Prints out the string format
 * @format: character string
 * Return: returns the number of chars
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, n = 0;
	char *s;

	if (!format)
		return (-1);

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{ write(1, &format[i], 1), n++;
		}
		else
		{
			switch (format[i + 1])
			{ case 'c':
				i++;
				{ char c = va_arg(args, int);
					write(1, &c, 1), n++;
				} break;
			case 's':
				s = va_arg(args, char *);

				if (s == NULL)
					s = "(null)";
				while (*s != '\0')
				{ write(1, s, 1), s++, n++;
				} i++;
				break;
			case '%':
				write(1, &format[i], 1), n++, i++;
				break;
			default:
				write(1, &format[i], 1), n++;
			}
		} i++;
	}
	va_end(args);
	return (n);
}
