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
	char buffer[1024];
	int buf_index = 0;

	if (!format)
		return (-1);

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			buffer[buf_index++] = format[i];
			n++;
		}
		else
		{
			if (format[i + 1] == '\0')
				break;

			if (format[i + 1] == '%') 
			{
				buffer[buf_index++] = '%';
				n++;
				i++;
			}
			else
			{
				switch (format[i + 1])
				{
				case 'c':
					i++;
					{
						char c = va_arg(args, int);
						buffer[buf_index++] = c;
						n++;
					}
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						s = "(null)";
					while (*s != '\0')
					{
						buffer[buf_index++] = *s;
						s++;
						n++;
					}
					i++;
					break;
				default:
					buffer[buf_index++] = format[i];
					n++;
				}
			}
		}
		i++;
	}
	va_end(args);

	write(1, buffer, buf_index);

	return (n);
}
