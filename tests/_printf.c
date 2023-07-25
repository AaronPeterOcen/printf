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
	va_list args;
	char buffer[1024];
	int count = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	count = confirm_format(format, args, buffer);

	va_end(args);

	write(1, buffer, count);

	return (count);
}
