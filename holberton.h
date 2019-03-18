#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/**
 * struct print - struct
 *
 * @print: prints the struct
 *
 * @f: print the fucntion
 */
typedef struct print
{
	char *print;
	int (*f)();
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);

int p_char(va_list arg);
int p_str(va_list arg);
int p_dec(va_list arg);
int p_int(va_list arg);

#endif
