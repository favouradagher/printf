/**
 * _print_special_str - print a string, replacing non-printable chars
 * @str: the string to print
 *
 * Return: the number of characters printed
 */
int _print_special_str(char *str)
{
    int i, count = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
        {
            count += _putchar('\\');
            count += _putchar('x');
            count += _print_hex(str[i]);
        }
        else
        {
            count += _putchar(str[i]);
        }
    }
    return (count);
}

/**
 * _print_hex - print an unsigned int in hexadecimal notation
 * @n: the unsigned int to print
 *
 * Return: the number of characters printed
 */
int _print_hex(unsigned int n)
{
    int count = 0;

    if (n / 16)
        count += _print_hex(n / 16);
    if (n % 16 < 10)
        count += _putchar(n % 16 + '0');
    else
        count += _putchar(n % 16 - 10 + 'A');

    return (count);
}

