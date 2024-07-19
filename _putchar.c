#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _putchar - writes a character to output
 * @c: character to write
 * Return: number of characters written and is always 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
