#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: character string containing directives.
 *
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
    int i = 0, len = 0, is_negative = 0, precision = -1, width = 0;
    va_list args;

    va_start(args, format);
    while (format && format[i])
    {
        if (format[i] == '%')
        {
            i++;
            precision = -1;
            width = 0;
            is_negative = 0;
            while (format[i] == '+' || format[i] == ' ' || format[i] == '#')
            {
                print_plus_space_hash(format, &i, format[i], &len, is_negative);
                i++;
            }
            while (format[i] >= '0' && format[i] <= '9')
            {
                width = width * 10 + (format[i] - '0');
                i++;
            }
            if (format[i] == '.')
            {
                i++;
                precision = 0;
                while (format[i] >= '0' && format[i] <= '9')
                {
                    precision = precision * 10 + (format[i] - '0');
                    i++;
                }
            }
            if (format[i] == 'l' || format[i] == 'h')
                i++;
            switch (format[i])
            {
            case 'c':
                len += _print_char(va_arg(args, int));
                break;
            case 's':
                len += _print_str(va_arg(args, char *), precision, width);
                break;
            case 'd':
            case 'i':
                len += _print_int(va_arg(args, int), precision, width, is_negative);
                break;
            case 'b':
                len += _print_binary(va_arg(args, unsigned int));
                break;
            case 'u':
                len += _print_unsigned_int(va_arg(args, unsigned int), precision, width);
                break;
            case 'o':
                len += _print_octal(va_arg(args, unsigned int), precision, width);
                break;
            case 'x':
            case 'X':
                len += _print_hexadecimal(va_arg(args, unsigned int), precision, width, format[i]);
                break;
            case 'p':
                len += print_address(args);
                break;
            case '%':
                _putchar('%');
                len++;
                break;
            default:
                _putchar('%');
                _putchar(format[i]);
                len += 2;
                break;
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
    return (len);
}

