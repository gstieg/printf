#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct specifier
 *
 * @s: Format specifiers
 *
 * @function_ptr: Functions that will execute depending on specifier
 */
typedef struct specifier
{
	char s;
	void (*function_ptr)();
} specifier_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int print_dec(va_list arg);
int print_int(va_list arg);
int print_digit(int num, int *count);

#endif /* __HOLBERTON_H__ */
