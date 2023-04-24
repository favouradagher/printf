#include "main.h"

/**
 * _print_number - Prints a number to stdout
 * @n: Number to print
 *
 * Return: Number of characters printed
 */

int _print_number(int n)
{
    int digits = 0;
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }
    if (n == 0)
    {
        _putchar('0');
        return 1;
    }
    while (n != 0)
    {
        digits++;
        _putchar((n % 10) + '0');
        n /= 10;
    }
    return digits;
}
