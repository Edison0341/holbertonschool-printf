#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct placeholder_t - structure to hold a placeholder and its
 * corresponding function
 * @ph: character pointer to the placeholder string
 * @f: function pointer to a function that takes a va_list argument and returns
 * an integer
 * description: this structure is used to define a mapping between a
 * placeholder and a function that handles the specific format
 * represented by the placeholder
 */
typedef struct placeholder_t
{
char *ph;
int (*f)(va_list);
} placeholder_t;

int print_int(va_list args);
int _printf(const char *format, ...);
int print_char(va_list);
int get_format(char specifier, va_list args);
int print_str(va_list args);
int _putchar(char c);

#endif /* MAIN_H */
