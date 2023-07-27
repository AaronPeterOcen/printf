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

	_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	
	_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');

	_printf("css%ccs%scscscs", 'T', "Test");
	printf("css%ccs%scscscs", 'T', "Test");

	_printf("%");
	printf("%");
	
	return (0);
}
