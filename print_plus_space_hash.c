#include "main.h"

/**
 * print_plus_space_hash - handles the +, space and # flags for non-custom conversion specifiers
 * @format: the format string being printed
 * @i: pointer to the current index in the format string
 * @flag: the flag being checked
 * @len: pointer to the length of the printed output
 * @is_negative: flag to indicate if the argument being printed is negative
 * Return: void
 */
void print_plus_space_hash(const char *format, int *i, char flag, int *len, int is_negative)
{
    if (flag == '+')
    {
        if (is_negative == 0)
        {
            _putchar('+');
            (*len)++;
        }
        else
            _putchar('-');
    }
    else if (flag == ' ')
    {
        if (is_negative == 0)
        {
            _putchar(' ');
            (*len)++;
        }
        else
            _putchar('-');
    }
    else if (flag == '#')
    {
        if (*format == 'o')
        {
            _putchar('0');
            (*len)++;
        }
        else if (*format == 'x' || *format == 'X')
        {
            _putchar('0');
            _putchar(*format);
            (*len) += 2;
        }
    }
}

