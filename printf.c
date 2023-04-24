#include "main.h"

/**
 *_printf - prints a string to stdout
 *
 * @format: string that is passed with specifiers
 *
 * Return: Returns length of string
 */

int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
            {
                int c = va_arg(args, int);
                _putchar(c);
                count++;
            }
            else if (*format == 's')
            {
                char *s = va_arg(args, char *);
                while (*s)
                {
                   _putchar(*s);
                    s++;
                    count++;
                }
            }
            else if (*format == '%')
            {
                _putchar('%');
                count++;
            }
        }
        else
        {
            _putchar(*format);
            count++;
        }
        format++;
    }
    va_end(args);
    return count;
}
