#include <stdarg.h>
#include <unistd.h>
#include "main.h"

int _printf(const char *format, ...)
{
	unsigned int i = 0, str_c;
	unsigned int totnum = 0;
	va_list list;

	if (!format || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_puts(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_puts(va_arg(list, int));
			i++;
		}
		else if (format[i + 1] ==  's')
		{
			str_c = _gets(va_arg(list, char *));
			i++;
			totnum += (str_c - 1);
		}
		else if (format[i + 1] == '%')
		{
			_puts('%');
		}
		totnum++;
		i++;
	}
	va_end(list);
	return (totnum);
}

