#include "main.h"

/**
 * _gets - print the string
 *
 * @s: string
 * Return: byte number
 */
int _gets(char *s)
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

