#include "main.h"

/**
 * _print_char - prints a character
 * @args: A va_list containing the character to print
 *
 * Return: The number of characters printed
 */
int _print_char(va_list args)
{
    char c = va_arg(args, int);
    _putchar(c);
    return (1);
}
