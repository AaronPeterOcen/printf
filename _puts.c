#include "main.h"
/**
 * _puts - Prints a char
 * Description: This function prints a char
 *
 * @c: Char to print
 * Return: 1
 */
int _puts(char c)
{
	return (write(1, &c, 1));
}
