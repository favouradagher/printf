#include "main.h"

/**
 * _print_hexadecimal - print an unsigned int in hexadecimal notation
 * @n: the unsigned int to print
 * @uppercase: whether to print in uppercase or not
 *
 * Return: the number of characters printed
 */
int _print_hexadecimal(unsigned int n, int uppercase)
{
    int count = 0;

    if (n / 16)
        count += _print_hexadecimal(n / 16, uppercase);
    if (n % 16 < 10)
        count += _putchar(n % 16 + '0');
    else if (uppercase)
        count += _putchar(n % 16 - 10 + 'A');
    else
        count += _putchar(n % 16 - 10 + 'a');

    return (count);
}
