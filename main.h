#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct print_fmt - Struct to define a print format
 * @type: The format type
 * @fn: The function to print this format
 */
typedef struct print_fmt
{
    char *type;
    int (*fn)(va_list);
} print_fmt_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int _print_number(int n);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex_low(va_list args);
int print_hex_up(va_list args);
int print_address(va_list args);
int print_binary(va_list args);
int print_rot13(va_list args);
int print_reverse(va_list args);
int print_custom(va_list args, char type);
int print_special_char(char c);
int print_buffer(char *buf);
int (*get_print_fn(char c))(va_list);
int _isdigit(int c);

#endif /* MAIN_H */
