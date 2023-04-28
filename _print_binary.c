#include "main.h"

/**
 * _print_binary - print an unsigned int in binary notation
 * @n: the unsigned int to print
 *
 * Return: the number of characters printed
 */
int _print_binary(unsigned int n)
{
    int count = 0;

    if (n / 2)
        count += _print_binary(n / 2);
    count += _putchar(n % 2 + '0');

    return (count);
}
