#include "main.h"
#include <stdarg.h>
/**
 * _printf - is a replica of printf
 * @s: string that enter my function
 * Return:
 */

int _printf(char *s, ...)
{
	int i, count; 
	int arg = 1;

	va_list place;

	va_start(place, s);

	if (s != NULL)
	{
		for (i = 0, count = 0; s[i] != '\0'; i++, count++)
		{
			if(s[i] == "%")
			{
				count += (get_format(s[i + 1],s ,place) -1)
				{
					if (count == 0)
					{
						_putchar(s[i]);
					}
					else
					{
						_putchar(s[i]);
					}
				}
			}
			else if (s[i + 1] == '%')
			{
				_putchar('%');
			}
		}
	}
}
