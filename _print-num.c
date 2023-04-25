#include "main.h"

/**
 * _print_num - print an integer
 * @n: integer to print
 *
 * Return: number of digits printed
 */
int _print_num(int n)
{
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		count++;
	}
	else
	{
		num = n;
	}

	if (num / 10)
		count += _print_num(num / 10);

	_putchar((num % 10) + '0');
	count++;

	return (count);
}
