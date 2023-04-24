#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - prints output according to a format.
 * @format: The format string
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
    va_list arg;
    int i, count = 0;
    char *str;

    va_start(arg, format);

    for (i = 0; format && format[i]; i++)
    {
        if (format[i] == '%')
        {
            switch (format[++i])
            {
                case 'c':
                    _putchar(va_arg(arg, int));
                    count++;
                    break;

                case 's':
                    str = va_arg(arg, char *);
                    if (str == NULL)
                        str = "(null)";
                    while (*str)
                    {
                        _putchar(*str++);
                        count++;
                    }
                    break;

                case '%':
                    _putchar('%');
                    count++;
                    break;

                default:
                    _putchar('%');
                    _putchar(format[i]);
                    count += 2;
                    break;
            }
        }
        else
        {
            _putchar(format[i]);
            count++;
        }
    }

    va_end(arg);

    return (count);
}

