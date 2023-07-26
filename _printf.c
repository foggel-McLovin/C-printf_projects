#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int count = 0;
    if (!format || !format[0])
        return -1;

    while (*format) {
        if (*format == '%') {
            format++;
            if (*format == 'c') {
                char c = (va_arg(args, int));
                count += putchar(c);
            }
            if (*format == 's') {
                char *str = va_arg(args, char *);
                count += handle_string(str);
            }
            if (*format == '%') {
                putchar('%');
                count++;
            }
        } else {
            putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return count;
}	
