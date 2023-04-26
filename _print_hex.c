#include "main.h"

/**
 * _print_hex - print an unsigned int in hexadecimal notation
 * @n: the unsigned int to print
 *
 * Return: the number of characters printed
 */
int _print_hex(unsigned int n)
{
    int count = 0;

    if (n / 16)
        count += _print_hex(n / 16);
    if (n % 16 < 10)
        count += _putchar(n % 16 + '0');
    else
        count += _putchar(n % 16 - 10 + 'A');

    return (count);
}
