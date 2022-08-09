#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int print_str(va_list);
int _puts(char *str);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);

#endif /* MAIN_H */
