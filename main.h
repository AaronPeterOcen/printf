#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/*printf func*/
int _printf(const char *format, ...);
int _putchar(char *buffer, char s);
/* Helper function prototypes */

/* Specifier verification */
int (*confirm_format(const char *s))();

typedef struct {
	char *s;
	int (*f)();
}format_info;

/*function buffer*/
void print_buffer(char *buffer, int size);
void buffer_remove(char *buffer);
int buffer_position(char *buffer);
char *init_buffer();
int add_buffer(char *buffer, char s);
char *flush_buffer(char *buffer);
#endif
