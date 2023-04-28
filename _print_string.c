#include "main.h"

/**
 * _print_string - prints a string
 * @args: A va_list containing the string to print
 *
 * Return: The number of characters printed
 */
int _print_string(va_list args)
{
    char *str = va_arg(args, char *);
    int count = 0;

    if (str == NULL)
        str = "(null)";
    while (*str != '\0')
    {
        _putchar(*str);
        str++;
        count++;
    }
    return (count);
}

