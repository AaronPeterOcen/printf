#include "main.h"

/**
 * confirm_format - Verifies formats
 * Description: This function verifies formats
 * @s: String to verify
 * Return: A function to execute
 */
int (*confirm_format(const char *s))()
{
	format_info ops[] = {
		{"%", print_percent},
		{"c", print_char},
		{"s", print_string},
		{"d", print_d},
		{"i", print_i},
		{"b", print_b},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"S", print_S},
		{"r", print_r},
		{"p", print_p},
		{"R", print_R}
	};
	int ops_len = sizeof(ops) / sizeof(format_info);
	const char *p = s + 1;
	int i = 0;

	if (*p != '\0')
	{
		for (; i < ops_len; i++)
		{
			if (ops[i].s[0] == *p)
			{
				return (ops[i].f);
			}
		}
	}
	return (NULL);
}
