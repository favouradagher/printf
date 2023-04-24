#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing directives
 * @...: additional arguments to be printed according to format
 *
 * Return: the number of characters printed (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					len += _putchar(va_arg(args, int));
					break;
				case 's':
					len += _puts(va_arg(args, char *));
					break;
				case '%':
					len += _putchar('%');
					break;
				case 'd':
				case 'i':
					len += _print_number(va_arg(args, int));
					break;
				default:
					len += _putchar('%') + _putchar(*format);
					break;
			}
		}
		else
			len += _putchar(*format);

		format++;
	}

	va_end(args);

	return (len);
}
