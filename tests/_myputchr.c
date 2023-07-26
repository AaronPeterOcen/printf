#include "main.h"

/**
 * _myputchr - My own putchar
 * @c: String
 * Return: 1
 */

int _myputchr(char c)
{
	return (write(1, &c, 1));
}
