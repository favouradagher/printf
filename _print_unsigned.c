#include "main.h"

/**
 * _print_unsigned - print an unsigned int
 * @n: the unsigned int to print
 *
 * Return: the number of characters printed
 */
int _print_unsigned(unsigned int n)
{
    int count = 0;

    if (n / 10)
        count += _print_unsigned(n / 10);
    count += _putchar(n % 10 + '0');

    return (count);
}
