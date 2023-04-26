#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

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



int _putchar(char c);
int _print_char(va_list args);
int _print_string(va_list args);
int _printf(const char *format, ...);
int _print_special_str(char *str);
int _print_hex(unsigned int n);
int _print_str(char *s);
int _print_num(int n);
int _print_hexadecimal(unsigned int n, int uppercase);
int _print_octal(unsigned int n);
int _print_unsigned(unsigned int n);
int _print_pointer(void *p);
int _print_binary(unsigned int n);
int print_address(va_list args);
void print_plus_space_hash(const char *format, int *i, char flag, int *len, int is_negative);
#endif /*MAIN_H*/
