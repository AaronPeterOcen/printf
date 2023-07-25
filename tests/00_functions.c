#include "main.h"

/**
 * print_custom_char - Prints characters
 * Description: This function prints characters
 * @args: Argument to print
 * @buffer: Buffer to store the output
 * Return: Always 1
 */
int print_custom_char(va_list args, char *buffer)
{
	char c = va_arg(args, int);

	if (c == '\0')
	{
		write(1, &c, 1);
		return (1);
	}
	_putchar(buffer, c);
	return (1);
}
/**
 * print_custom_string - Prints a string
 * Description: This function prints a string
 * @args: String to print
 * @buffer: Buffer to store the output
 * Return: length of the string
 */
int print_custom_string(va_list args, char *buffer)
{
	char *str = va_arg(args, char *);
	int len;
	int i = 0;

	if (str)
	{
		len = strlen(str);
		for (; i < len; i++)
		{
			_putchar(buffer, *(str + i));
		}
	}
	else
	{
		len = 6;
		str = "(null)";
		for (; i < len; i++)
		{
			_putchar(buffer, *(str + i));
		}
	}
	return (len);
}
/**
 * print_custom_percent - Prints percent symbol
 * Description: This function prints the percent symbol
 * @s: Character to print (not used in this function)
 * @buffer: Buffer to store the output
 * Return: Always 1
 */
int print_custom_percent(char *s, char *buffer)
{
	s++;
	_putchar(buffer, '%');
	return (1);
}
