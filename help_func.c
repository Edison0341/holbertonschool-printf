#include "main.h"
#include <stdarg.h>
/**
 * hold - selects the correct function
 *
 *
 */

placeholder_t placeholder[] = {
	{"i", print_int},
	{"d", print_float},
	{"c", print_char},
	{"s", print_str},
	{NULL, NULL},
};

/**
 * get_format - handles different format specifiers
 * @specifier: the format specifier character
 * @place: the variable argument list
 * Return: number of characters printed
 */
int get_format(char specifier, va_list args)
{
	int i, count = 0;

	for (i = 0; placeholder[i].ph != NULL; i++)
	{
		if (placeholder[i].ph[0] == specifier)
		{
			count = placeholder[i].f(args);
			break;
		}
	}
	return (count);
}
/**
  * _strlen - get the length of the string
  * @:
  * Return: the length of the string
  */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
 /**
  * _putchar
  * @
  * Return:
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

