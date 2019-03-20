#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct specifier - Array containing format specicifiers and their functions
 *
 * @s: Format specifiers
 *
 * @function_ptr: Functions that will execute depending on specifier
 */
typedef struct specifier
{
	char s;
	int (*function_ptr)(va_list arguments);
} specifier_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int print_dec(va_list arg);
int print_int(va_list arg);
int print_percent(va_list arg);
int print_digit(int num, int *count);
int (*get_op_func(char s))(va_list arguments);

#endif /* __HOLBERTON_H__ */
