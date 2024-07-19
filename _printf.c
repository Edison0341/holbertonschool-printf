#include "main.h"
#include <stdarg.h>
/**
 * _printf - custom implementation of printf
 * @format: string that contains the format specifiers
 * Return: numbers of characters printed
 */
int _printf(const char *format, ...)
{
	int i, count = 0;

	va_list args;

	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] =='%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
				i++;
			}
			else if (format[i + 1] != '\0')
			{
				int printed = get_format(format[i + 1], args);
				if (printed != 0)
				{
					count += printed;
					i++;
				}
				else
				{
					_putchar(format[i]);
					count++;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
