#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>

typedef struct
{
char *l;
int (*f)()
} placeholder;
int print_int(place);
int _printf(char *s, ...);
int _strlen(char *s);
int _putchar(char c);
int get_format(char c,char *s);
int print_str(place);
int print_float(place);
#endif /* MAIN_H */
