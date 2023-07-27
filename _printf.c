#include "main.h"

/**
 * _printf - Prints formatted output to stdout.
 * @format: The format string containing the text and format specifiers.
 * Return: The number of characters printed, or -1 on failure.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, len = 0;

	va_start(args, format);

	if (format == NULL)
		return -1;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++; // Move past the '%'

			if (format[i] == 's')
				len += printf_string(va_arg(args, char *));
			else if (format[i] == 'c')
				len += printf_char(va_arg(args, int));
			else if (format[i] == '%')
			{
				_putchar('%');
				len++;
			}
			else
			{
				_putchar('%'); // Print the original '%'
				_putchar(format[i]);
				len += 2; // Account for both characters printed
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}

		i++;
	}

	va_end(args);
	return len;
}
