#include "main.h"

/**
 * _printf - print the formated text
 *
 * @format: format specifier
 * Return: returns number of byte
 */

int _printf(const char *format, ...)
{
	unsigned int i, str_count, printed_chars = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_myputchr(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_myputchr(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str_count = _myputs(va_arg(args, char *));
			i++;
			printed_chars += (str_count - 1);
		}
		else if (format[i + 1] == '%')
		{
			_myputchr('%');
		}

		printed_chars += 1;
	}

	va_end(args);
	return (printed_chars);
}
