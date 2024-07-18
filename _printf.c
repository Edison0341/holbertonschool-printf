#include "main.h"
#include <stdarg.h>

/**
 * printf - custom implementation of printf
 * @format: string that contains the format specifiers
 * Return: numbers of characters printed
 */
int _printf(const char *format, ...)
{
	int i, count = 0;

	va_list args;

	va_start (args, format);

	if (format != NULL)
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%' && format[i + 1] != '\0')
			{
					
				count += get_format(format[i + 1], args);
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
	}
	va_end(args);
	return (count);
}
