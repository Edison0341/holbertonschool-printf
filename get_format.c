#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * get_format - matches format specifier with the corresponding function
 * @specifier: the format specifier character
 * @args: the variadic argument list
 * Return: number of characters printed
 */
int get_format(char specifier, va_list args)
{
	int i, count = 0;

	placeholder_t placeholder[] = {
		{"i", print_int},
		{"d", print_int},
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL},
	};
	if (specifier == '%')
	{
		_putchar(specifier);
		return (1);
	}
	else
	{
		for (i = 0; placeholder[i].ph != NULL; i++)
		{
			if (placeholder[i].ph[0] == specifier)
			{
				count = placeholder[i].f(args);
				break;
			}
		}
	}
	return (count);
}
