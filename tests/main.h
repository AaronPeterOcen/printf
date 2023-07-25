#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/*printf func*/
int _printf(const char *format, ...);
int _puts(char c);
int  _gets(char *s);


/*00function psecifiers*/
int print_custom_percent(char *s, char *buffer);
int print_custom_char(va_list args, char *buffer);
int print_custom_string(va_list args, char *buffer);


#endif
