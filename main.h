#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
typedef struct
{
char *ph;
int (*f)(va_list);
} placeholder_t;

int print_int(va_list args);
int _printf(const char *format, ...);
int _strlen(char *s);
int print_char(va_list);
int get_format(char specifier, va_list args);
int print_str(va_list args);
int print_float(va_list args);
int _putchar(char c);
#endif /* MAIN_H */
