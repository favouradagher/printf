#include "main.h"

/**
 * _print_num - print an integer
 * @n: the integer to print
 *
 * Return: the number of characters printed
 */
int _print_num(int n)
{
    int count = 0;

    if (n < 0)
    {
        count += _putchar('-');
        n = -n;
    }

    if (n / 10)
        count += _print_num(n / 10);
    count += _putchar(n % 10 + '0');

    return (count);
}
