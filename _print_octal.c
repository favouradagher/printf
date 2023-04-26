#include "main.h"

/**
 * _print_octal - print an unsigned int in octal notation
 * @n: the unsigned int to print
 *
 * Return: the number of characters printed
 */
int _print_octal(unsigned int n)
{
    int count = 0;

    if (n / 8)
        count += _print_octal(n / 8);
    count += _putchar(n % 8 + '0');

    return (count);
}
