#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - prints output according to a format
 * @format: the format string to print
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
    int i = 0, count = 0;
    va_list args;

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
                case 'c':
                    count += _putchar(va_arg(args, int));
                    break;
                case 's':
                    count += _print_str(va_arg(args, char *));
                    break;
                case '%':
                    count += _putchar('%');
                    break;
                case 'd':
                case 'i':
                    count += _print_num(va_arg(args, int));
                    break;
                case 'b':
                    count += _print_binary(va_arg(args, unsigned int));
                    break;
                default:
                    count += _putchar('%');
                    count += _putchar(format[i]);
                    break;
            }
        }
        else
        {
            count += _putchar(format[i]);
        }
        i++;
    }

    va_end(args);

    return (count);
}

