#include "main.h"

/**
 * _print_binary - prints the binary representation of an unsigned int
 * @n: the unsigned int to print in binary
 *
 * Return: the number of characters printed
 */
int _print_binary(unsigned int n)
{
    int count = 0;

    if (n / 2)
        count += _print_binary(n / 2);

    count += _putchar('0' + n % 2);

    return (count);
}

