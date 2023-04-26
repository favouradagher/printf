#include "main.h"

/**
 * _print_str - print a string
 * @s: the string to print
 *
 * Return: the number of characters printed
 */
int _print_str(char *s)
{
    int i, count = 0;

    for (i = 0; s[i] != '\0'; i++)
        count += _putchar(s[i]);

    return (count);
}
