#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a string containing zero or more directives
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
    int count = 0, i = 0, printed_chars = 0;
    va_list args;

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == '%')
        {
            i++;
            while (format[i] == ' ')
                i++;
            if (format[i] == '\0')
                return (-1);
            if (format[i] == '%')
                count += _putchar('%');
            else if (format[i] == 'c')
                count += _putchar(va_arg(args, int));
            else if (format[i] == 's')
                count += _print_str(va_arg(args, char *));
            else if (format[i] == 'd' || format[i] == 'i')
                count += _print_num(va_arg(args, int));
            else if (format[i] == 'b')
                count += _print_binary(va_arg(args, unsigned int));
            else if (format[i] == 'x' || format[i] == 'X')
                count += _print_hexadecimal(va_arg(args, unsigned int), format[i] == 'X');
            else if (format[i] == 'o')
                count += _print_octal(va_arg(args, unsigned int));
            else if (format[i] == 'u')
                count += _print_unsigned(va_arg(args, unsigned int));
            else if (format[i] == 'p')
                count += _print_pointer(va_arg(args, void *));
            else if (format[i] == 'S')
                count += _print_special_str(va_arg(args, char *));
            else
                count += _putchar('%'), count += _putchar(format[i]);
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

