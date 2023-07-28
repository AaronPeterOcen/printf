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
	va_list list;
	unsigned int i = 0, totnum = 0;
	char *stg;

	if (!format)
		return (-1);

	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{ write(1, &format[i], 1), totnum++;
		}
		else
		{
			switch (format[i + 1])
			{ case 'c':
				i++;
				{ char c = va_arg(list, int);
					write(1, &c, 1), totnum++;
				} break;
			case 's':
				stg = va_arg(list, char *);

				if (stg == NULL)
					stg = "(null)";
				while (*stg != '\0')
				{ write(1, stg, 1), stg++, totnum++;
				} i++;
				break;
			case '%':
				write(1, &format[i], 1), totnum++, i++;
				break;
			default:
				write(1, &format[i], 1), totnum++;
			}
		} i++;
	}
	va_end(list);
	return (totnum);
}
