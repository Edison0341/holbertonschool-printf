#include "main.h"
#include <stdarg.h>

/**
 * get_format - handles different format specifiers
 * @specifier: the format specifier character
 * @place: the variable argument list
 * Return: number of characters printed
 */
int get_format(char specifier, va_list place)
{
	int i, count = 0;

	for (i = 0; placeholder[i] != NULL; i++)
	{
		if (s == placeholder[i].ph)
		{
			count = _strlen(*s);
		}
	}
	return(placeholder[i].f);
}

/**
 * print_int - prints a number
 * @place:
 * Return:
 */
int print_int(place)
{
	unsigned int len;
	int valor, n;
	char str;

	valor = va_arg(place int);

	if (n < 0)
	{
		
	}
}
