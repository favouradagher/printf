#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - prints output according to a format
 * @format: a character string with format directives
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	if (format == NULL)
		return (-1);
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			else if (*format == '%')
				count += putchar('%');
			else if (*format == 'c')
				count += putchar(va_arg(args, int));
			else if (*format == 's')
				count += puts(va_arg(args, char *));
			else
				return (-1);
		}
		else
		{
			count += putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
