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



int _putchar(char c);
int _print_char(va_list args);
int _print_string(va_list args);
int _printf(const char *format, ...);
#endif /*MAIN_H*/
