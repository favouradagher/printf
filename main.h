#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

#define NULL_STRING "(null)"

#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

#define CONVERT_LOWERCASE 1
#define CONVERT_UNSIGNED 2

/**
 * struct print_fmt - Struct to define a print format
 * @type: The format type
 * @fn: The function to print this format
 */
/*typedef struct print_fmt
{
	char *type;
	int (*fn)(va_list, params_t *);
} print_fmt_t;*/
/**
 * struct parameters - parameters struct
 * @unsign: flag if unsigned value
 *
 * @plus_flag: on if plus_flag specified
 * @space_flag: on if hashtag_flag specified
 * @hashtag_flag: on if _flag specified
 * @zero_flag: on if _flag specified
 * @minus_flag: on if _flag specified
 *
 * @width: field width specified
 * @precision: field precision specified
 *
 * @h_modifier: on if h_modifier is specified
 * @l_modifier: on if l_modifier is specified
 */
typedef struct parameters
{
	unsigned int unsign : 1;
	unsigned int plus_flag : 1;
	unsigned int space_flag : 1;
	unsigned int hashtag_flag : 1;
	unsigned int zero_flag : 1;
	unsigned int minus_flag : 1;

	unsigned int width;
	unsigned int precision;

	unsigned int h_modifier : 1;
	unsigned int l_modifier : 1;
} params_t;

/**
 * struct specifier - Struct token
 * @specifier: The format type
 * @f: The function associated
 */
typedef struct specifier
{
       	char *specifier;
	int (*f)(va_list, params_t *);
 } specifier_t;

/*_printf.c module*/
int _printf(const char *format, ...);
/*_put.c module*/
int _putchar(char c);
int _puts(char *str);

/*print_functions.c module*/
int print_char(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_int(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);
int print_S(va_list ap, params_t *params);

/*number.c module*/
char *convert(long int num, int base, int flags, params_t *params);
int print_unsigned(va_list ap, params_t *params);
int print_address(va_list ap, params_t *params);

/*specifier.c module*/
int (*get_specifier(char *s)) (va_list ap, params_t *params);
int get_print_func(char *s, va_list ap, params_t *params);
int get_flag(char *s, params_t *params);
int get_modifier(char *s, params_t *params);
char get_width(char *s, params_t *params, va_list ap);

/*convert_number.c module*/
int print_octal(va_list ap, params_t *params);
int print_hex(va_list ap, params_t *params);
int print_HEX(va_list ap, params_t *params);
int print_binary(va_list ap, params_t *params);

/*simple_printers.c module*/
int print_rot13(va_list ap, params_t *params);
int print_reverse(va_list ap, params_t *params);
int print_from_to(char *start, char *stop, char *except);

/*print_number.c module*/
int _isdigit(int c);
int _strlen(char *s);
int print_number(char *str, params_t *params);
int print_number_right_shift(char *str, params_t *params);
int print_number_left_shift(char *str, params_t *params);

/*params.c module*/
void init_param(params_t *params, va_list ap);

/*string_fields.c module*/
char *get_precision(char *p, params_t *params, va_list ap);

int _print_num(int n);
int _print_str(char *str);
int _print_binary(unsigned int n);
int print_custom(va_list args, char type);
int print_special_char(char c);
int print_buffer(char *buf);
int (*get_print_fn(char c))(va_list);

#endif /* MAIN_H */
