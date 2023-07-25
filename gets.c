#include "main.h"

/**
 * gets - print the string
 *
 * @s: string
 * Return: byte number
 */
int gets(char *s)
{
	int cnt = 0;

	if (s)
	{
		while (s[cnt] != '\0')
		{
			_puts(s[cnt]);
			cnt++;
		}
	}
	return (cnt);
}

