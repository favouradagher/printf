#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Custom printf implementation that supports %c, %s, %d, and %i format specifiers.
 *
 * @format: The format string.
 *
 * Return: The number of characters printed (excluding the null byte used to end output to strings).
 */

int _printf(const char *format, ...)
{
    va_list args;
    int len = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
                case 'c':
                    len += putchar(va_arg(args, int));
                    break;

                case 's':
                    len += printf("%s", va_arg(args, char *));
                    break;

                case '%':
                    len += _putchar('%');
                    break;

                case 'd':
                case 'i':
                    len += printf("%d", va_arg(args, int));
                    break;

                default:
                    _putchar('%');
                    _putchar(*format);
                    len += 2;
                    break;
            }
        }
        else
        {
            _putchar(*format);
            len++;
        }
        format++;
    }

    va_end(args);

    return len;
}
