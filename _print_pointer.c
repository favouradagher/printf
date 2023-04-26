#include "main.h"

/**
 * _print_pointer - print a void pointer
 * @p: the pointer to print
 *
 * Return: the number of characters printed
 */
int _print_pointer(void *p)
{
    unsigned long int n = (unsigned long int)p;
    int count = 0;

    count += _putchar('0');
    count += _putchar('x');
    if (n == 0)
        count += _putchar('0');
    else
        count += _print_hexadecimal(n, 0);

    return (count);
}
