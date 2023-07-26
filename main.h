#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
/**
 * main.h functions
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdarg.h>
int handle_string (char *str)
int i = 0
if (str == NULL )
{
handle_string("(null)")
return (i)
while (str[i])
putchar (str[i])
i++
}
return [i]

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int count = 0;
if ( !format || !format[0])
return (-1)

    while (*format) {
        if (*format == '%') {
            format++; // Move to the character after '%'
         if ( *format == 'c')
                    char c = (va_arg(args, int));
                    count+= putchar (c)
         if (*format == s )
                    char *str = va_arg(args, char *);
count += handle_string (str)
                }
                if ( *format == %)
                    putchar('%');
                    count ++
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

int main() {
    _printf("Hello, %s! This is a %c test.\n", "world", 'c');
    return 0;
}
