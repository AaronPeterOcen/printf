#include "main.h"

/**
 * condition - Checks if the format string is empty,
 * or contains only a single '%'.
 * @format: The format string to check.
 * Return: 1 if the format is empty or contains only a single '%',
 * 0 otherwise.
 */
int condition(const char *format)
{
	if (format == NULL)
	{
		return (1);
	}
	if (*format == '%')
	{
		if (*(format + 1) == '\0')
		{
			return (1);
		}
	}
	return (0);
}
/**
 * _printf - Printf function copy
 * Description: This is a modified version of printf
 * @format: String to print
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int totnum = 0;
	int (*f)();
	const char *p;
	char *buffer = init_buffer();
	va_list list;

	va_start(list, format);
	if (!buffer)
		return (0);
	if (condition(format))
	{
		free(buffer);
		return (-1);
	}
	p = format;
	while (*p)
	{
		if (*p == '%')
		{
			f = confirm_format(p);
			if (f)
			{
				totnum += f(list, buffer);
				p++;
			}
			else
			{
				_putchar(buffer, *p);
				totnum++;
			}
		}
		else
		{
			switch (*p)
			{
				case '\n':
					_putchar(buffer, *p);
					totnum++;
					break;
				case '\t':
					_putchar(buffer, *p);
					totnum++;
					break;
				default:
					_putchar(buffer, *p);
					totnum++;
			}
		}
		p++;
	}
	va_end(list);
	print_buffer(buffer, buffer_position(buffer));
	free(buffer);
	return (totnum);
}
