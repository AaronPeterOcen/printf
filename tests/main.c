#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("[%%]\n");
	printf("[%%]\n");

	_printf("%c\n", 'l');
	printf("%c\n", 'l');

	_printf("%s\n", "string 1");
    printf("%s\n", "string 2");
	return (0);
}
