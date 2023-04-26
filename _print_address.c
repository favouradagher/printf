#include "main.h"

/**
 * print_address - Prints the address of a pointer.
 * @args: List of arguments
 *
 * Return: Number of printed characters.
 */
int print_address(va_list args)
{
    unsigned long int address = va_arg(args, unsigned long int);
    unsigned long int quotient = address, remainder;
    int len = 0, i;
    char hex_num[100];

    /* Convert decimal to hexadecimal */
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hex_num[len++] = 48 + remainder;
        else
            hex_num[len++] = 87 + remainder;
        quotient /= 16;
    }
    /* Print the address */
    _putchar('0');
    _putchar('x');
    for (i = len - 1; i >= 0; i--)
        _putchar(hex_num[i]);
    return (len + 2);
}

