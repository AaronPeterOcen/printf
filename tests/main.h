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
int (*confirm_format(const char *format, va_list args, char*buffer));

typedef struct {
	char *s;
	int (*f)(va_list args, char *buffer);
}format_info_t;

/*function buffer*/
void print_buffer(char *buffer, int size);
void buffer_remove(char *buffer);
int buffer_pos(char *buffer);
char *init_buffer();
int add_buffer(char *buffer, char s);
char *flush_buffer(char *buffer);
/*00function psecifiers*/
int print_custom_percent(char *s, char *buffer);
int print_custom_char(va_list args, char *buffer);
int print_custom_string(va_list args, char *buffer);

/*01function specifiers*/
int print_custom_d(va_list args, char *buffer);
int print_custom_i(va_list args, char *buffer);
int print_custom_number(int n, char *buffer);

/*advanced tasks*/
int print_b(va_list args, char *buffer);
int print_u(va_list args, char *buffer);
int print_o(va_list args, char *buffer);
int print_x(va_list args, char *buffer);
int print_X(va_list args, char *buffer);
int print_number_u(unsigned int, char *buffer);
int print_hexa(char s, char *buffer);
int print_S(va_list args, char *buffer);
int print_r(va_list args, char *buffer);
int print_p(va_list args, char *buffer);
int print_R(va_list args, char *buffer);
#endif
