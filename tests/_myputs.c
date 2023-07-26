#include "main.h"

/**
 * _myputs - print a string
 *
 * @c: string
 * Return: returns number of byte
 */

int _myputs(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			_myputchr(c[count]);
		}
	}
	return (count);
}
