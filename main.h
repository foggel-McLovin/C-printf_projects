#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct op - match the conversion specifiers for printf
 * @form: type char pointer of the specifier
 * @m: type pointer to function for the conversion specifier
 *
 */

typedef struct op
{
	char *form;
	int (*m)();
} op_t;
int printf_char(va_list argument);
int printf_string(va_list argument);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_percent(void);
int _strlen(char *s);
int _strlenc(const char *s);
#endif
