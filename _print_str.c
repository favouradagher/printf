#include "main.h"

/**
 * _print_str - prints a string to the standard output
 * @str: the string to print
 *
 * Return: the number of characters printed
 */
int _print_str(char *str)
{
        int count = 0;

        while (*str)
        {
                _putchar(*str++);
                count++;
        }

        return (count);
}

