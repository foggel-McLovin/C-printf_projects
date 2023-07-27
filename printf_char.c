#include "main.h"

/**
 * printf_char - prints a char.
 * @argument: arguments.
 * Return: 1.
 */
int printf_char(va_list argument)
{
	char s;

	s = va_arg(argument, int);
	_putchar(s);
	return (1);
}
