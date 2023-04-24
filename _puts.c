#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @str: Pointer to string to print
 *
 * Return: Number of characters printed
 */

int _puts(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
    return i;
}
