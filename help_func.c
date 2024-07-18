#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * hold - selects the correct function
 *
 *
 */

placeholder_t placeholder[] = {
	{"i", print_int},
	{"d", print_int},
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
/**
 *
 *
 *
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);
	_putchar(c);
	return (1);
}


/**
 *
 *
 *
 * Return:
 */

int print_str(va_list args)
{
	char *string = va_arg(args, char *);
	int count = 0;

	if (string == NULL)
	{
		string = NULL;
	}

	while (*string)
	{
		_putchar(*string++);
		count++;
	}
	return count;
}

/**
 *
 *
 *
 * Return:
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	int num = n;
	int count = 0;
	char buffer[12];
	char *str = buffer + sizeof(buffer) - 1;

	*str = '\0';

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	while (num > 0 )
	{
		*--str = (num % 10) + '0';
		num /= 10;
	}

	while (*str)
	{
		_putchar(*str++);
		count++;
	}

	return (count);

}

