#include "main.h"
#include <stdarg.h>

/**
 * confirm_format - checks formats
 * Description: This function verifies formats
 * @s: String to verify
 * Return: A function to execute
 */
int (*confirm_format(const char *s))()
{
	ps_s ops[] = {
		{"%", print_custom_percent},
		{"c", print_custom_char},
		{"s", print_custom_string}
	};
	int ops_l = sizeof(ops) /sizeof(ps_s);
	const char *p = s;
	int i = 0;

	p++;

	if (*p != '\0')
	{
		while (i < ops_l)
		{
			if (ops[i].s[0] == p[0])
				return (ops[i].f);
		}
	}
	return (NULL);
}
