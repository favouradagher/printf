#include "main.h"

/**
 * _print_special_str - print a string, replacing non-printable chars
 * @str: the string to print
 *
 * Return: the number of characters printed
 */
int _print_special_str(char *str)
{
    int i, count = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
        {
            count += _putchar('\\');
            count += _putchar('x');
            count += _print_hex(str[i]);
        }
        else
        {
            count += _putchar(str[i]);
        }
    }
    return (count);
}
