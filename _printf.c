#include <stdarg.h>
#include <unistd.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, c = 0, n = 0;

	if (!format || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			write(1, &format[i], 1), n++;
		else
		{
			switch (format[i + 1])
			{
			case 'c':
				c = va_arg(args, int), write(1, &c, 1), n++, i++;
				break;
			case 's':
				{
					char *s = va_arg(args, char *);
					while (s[c] != '\0')
						write(1, &s[c++], 1), n++;
					c = 0, i++;
					break;
				}
			case '%':
				write(1, &format[i], 1), n++, i++;
				break;
			default:
				write(1, &format[i], 1), n++;
			}
		}
		i++;
	}
	va_end(args);
	return (n);
}

