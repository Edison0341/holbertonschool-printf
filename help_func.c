#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_char - prints a character
 *@args: va_list containing the character to be printed
 *Return: number of characters printed
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	_putchar(c);

	return (1);
}


/**
 *print_str - prints a string from variadic arguments
 *@args: variadic argument list
 *Return: number of characters printed
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
	return (count);
}

/**
 *print_int - prints an integer from the variadic arguments
 *@args: the variadic argument list
 *Return: number of characters printed
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

	while (num > 0)
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

